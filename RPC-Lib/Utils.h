#pragma once
#include <Windows.h>
#include <tlhelp32.h>
#include <sddl.h>
#include <taskschd.h>
#include <comdef.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>

using std::endl;
using std::cout;
using std::wcout;
using std::runtime_error;
using std::wstring;
using std::string;
using std::stringstream;

#define PROTSEC L"ncalrpc"

string TranslateCode(DWORD ErrorCode);
void ThrowException(const char* Message, const DWORD ErrorCode);
wstring IfIdToWstring(const RPC_IF_ID* IfID);
wstring UuidToWstring(const UUID* Uuid);
wstring BindHandleToWstring(RPC_BINDING_HANDLE Handle);
wstring GetServiceNameFromPid(DWORD Pid);
void SidToUsername(PSID Sid, wstring& Username, wstring& SidString);
void GetSidAndUsername(HANDLE Token, wstring& SidStr, wstring& UsernameStr);
void RegisterScheduledTask(wstring& TaskName, wstring& Argument, bool HighestPrivileges);
wstring GetProcFileName(DWORD Pid);
void LogCallAttributes(RPC_BINDING_HANDLE BindingHandle);
wstring GetImpersonationLevel(HANDLE TokenHandle);
HANDLE GetRpcClientToken(RPC_BINDING_HANDLE BindingHandle);
void LogTokenInfo(RPC_BINDING_HANDLE BindingHandle);
void LogConnectionInfo(RPC_BINDING_HANDLE BindingHandle);
RPC_STATUS RpcIfCallbackFn(RPC_IF_HANDLE InterfaceUuid, void* Context);
void RegisterServer(RPC_IF_HANDLE Interface, wchar_t* Protseq, wchar_t* Endpoint, wchar_t* Annotation);
void QueryStatusService(const wstring& ServiceName);