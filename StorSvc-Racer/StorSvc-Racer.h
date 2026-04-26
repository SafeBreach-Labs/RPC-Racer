#pragma once
#include "RPC-Lib/Utils.h"
#include <tlhelp32.h>
#include <Bits.h>
#include <deliveryoptimization.h>
#include "StorSvc_h.h"

wstring g_RemoteServer;
const wstring REGISTER_FLAG = L"/register";
wstring TASK_NAME = L"RPC-Racer";

void TriggerCreateJob(LPCWSTR JobName);