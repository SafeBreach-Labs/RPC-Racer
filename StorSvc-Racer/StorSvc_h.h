

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for StorSvc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __StorSvc_h_h__
#define __StorSvc_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "wtypesbase.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __StorSvc_INTERFACE_DEFINED__
#define __StorSvc_INTERFACE_DEFINED__

/* interface StorSvc */
/* [version][uuid] */ 

typedef 
enum _STORAGE_DEVICE_TYPE
    {
        STORAGE_DEVICE_INTERNAL	= 0,
        STORAGE_DEVICE_EXTERNAL	= 0x1,
        STORAGE_DEVICE_SD	= 0x1,
        STORAGE_DEVICE_MAX	= 0x2
    } 	STORAGE_DEVICE_TYPE;

typedef enum _STORAGE_DEVICE_TYPE *PSTORAGE_DEVICE_TYPE;

typedef 
enum _STORAGE_SETTING
    {
        STORAGE_SETTING_CARD_DISABLED	= 0x1,
        STORAGE_SETTING_WRITE_ACCESS	= 0x2,
        STORAGE_SETTING_APP_PAIRING_STATUS	= 0x3
    } 	STORAGE_SETTING;

typedef enum _STORAGE_SETTING *PSTORAGE_SETTING;

typedef 
enum _STORAGE_PRESENCE_STATE
    {
        STORAGE_PRESENCE_MOUNTED	= 0,
        STORAGE_PRESENCE_PREDISMOUNTED	= 0x1,
        STORAGE_PRESENCE_DISMOUNTED	= 0x2
    } 	STORAGE_PRESENCE_STATE;

typedef enum _STORAGE_PRESENCE_STATE *PSTORAGE_PRESENCE_STATE;

typedef 
enum _STORAGE_DISMOUNT_REASON
    {
        STORAGE_DISMOUNT_NONE	= 0,
        STORAGE_DISMOUNT_SAFE_REMOVAL	= 0x1,
        STORAGE_DISMOUNT_SURPRISE_REMOVAL	= 0x2,
        STORAGE_DISMOUNT_IO_FAILURE	= 0x3,
        STORAGE_DISMOUNT_BUSY	= 0x4
    } 	STORAGE_DISMOUNT_REASON;

typedef enum _STORAGE_DISMOUNT_REASON *PSTORAGE_DISMOUNT_REASON;

typedef 
enum _STORAGE_FREE_SPACE_STATE
    {
        STORAGE_SPACE_NORMAL	= 0,
        STORAGE_SPACE_LOW	= 0x1
    } 	STORAGE_FREE_SPACE_STATE;

typedef enum _STORAGE_FREE_SPACE_STATE *PSTORAGE_FREE_SPACE_STATE;

typedef 
enum _STORAGE_TEMP_CLEANUP_STATE
    {
        STORAGE_TEMP_NORMAL	= 0,
        STORAGE_TEMP_CLEANUP	= 0x1
    } 	STORAGE_TEMP_CLEANUP_STATE;

typedef enum _STORAGE_TEMP_CLEANUP_STATE *PSTORAGE_TEMP_CLEANUP_STATE;

typedef 
enum _STORAGE_DEVICE_PROPERTIES
    {
        STORAGE_PROPERTY_NONE	= 0,
        STORAGE_PROPERTY_REMOVABLE	= 0x1
    } 	STORAGE_DEVICE_PROPERTIES;

typedef enum _STORAGE_DEVICE_PROPERTIES *PSTORAGE_DEVICE_PROPERTIES;

typedef 
enum _STORAGE_VOLUME_STATUS
    {
        STORAGE_STATUS_NORMAL	= 0,
        STORAGE_STATUS_DIRTY	= 0x1,
        STORAGE_STATUS_UNFORMATTED	= 0x2,
        STORAGE_STATUS_NEW_CARD	= 0x4,
        STORAGE_STATUS_DISABLED	= 0x8,
        STORAGE_STATUS_READ_ONLY	= 0x10,
        STORAGE_STATUS_WRITE_FAILURE	= 0x20
    } 	STORAGE_VOLUME_STATUS;

typedef enum _STORAGE_VOLUME_STATUS *PSTORAGE_VOLUME_STATUS;

typedef 
enum _STORAGE_APP_PAIRING_STATUS
    {
        STORAGE_APP_PAIRING_DIFFERENT_DEVICE	= 0x1,
        STORAGE_APP_PAIRING_SAME_DEVICE	= 0x2,
        STORAGE_APP_PAIRING_NO_DEVICE	= 0x4
    } 	STORAGE_APP_PAIRING_STATUS;

typedef enum _STORAGE_APP_PAIRING_STATUS *PSTORAGE_APP_PAIRING_STATUS;

typedef struct _STORAGE_DEVICE_INFO
    {
    unsigned int Size;
    wchar_t PathName[ 260 ];
    STORAGE_DEVICE_PROPERTIES DeviceProperties;
    STORAGE_PRESENCE_STATE PresenceState;
    STORAGE_DISMOUNT_REASON DismountReason;
    STORAGE_VOLUME_STATUS VolumeStatus;
    STORAGE_FREE_SPACE_STATE FreeSpaceState;
    STORAGE_TEMP_CLEANUP_STATE TempCleanupState;
    GUID StorageId;
    STORAGE_APP_PAIRING_STATUS AppPairingStatus;
    unsigned __int64 ReservedSize;
    wchar_t FriendlyName[ 260 ];
    unsigned int BusType;
    unsigned int FileSystemType;
    unsigned int PersistentVolumeState;
    } 	STORAGE_DEVICE_INFO;

typedef struct _STORAGE_DEVICE_INFO *PSTORAGE_DEVICE_INFO;

long SvcMountVolume( 
    /* [in] */ handle_t IDL_handle);

long SvcDismountVolume( 
    /* [in] */ handle_t IDL_handle);

long SvcFormatVolume( 
    /* [in] */ handle_t IDL_handle);

long SvcGetStorageInstanceCount( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ STORAGE_DEVICE_TYPE DeviceType,
    /* [out] */ LPDWORD DevicesCount);

long SvcGetStorageDeviceInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ STORAGE_DEVICE_TYPE DeviceType,
    /* [in] */ DWORD DeviceIndex,
    /* [out][in] */ STORAGE_DEVICE_INFO *DeviceInfo);

long CleanupItem( 
    /* [in] */ handle_t IDL_handle);

long SvcRebootToFlashingMode( 
    /* [in] */ handle_t IDL_handle);

long SvcRebootToUosFlashing( 
    /* [in] */ handle_t IDL_handle);

long SvcFinalizeVolume( 
    /* [in] */ handle_t IDL_handle);

long SvcGetStorageSettings( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ STORAGE_DEVICE_TYPE DeviceType,
    /* [in] */ DWORD DeviceIndex,
    /* [in] */ STORAGE_SETTING SettingsType,
    /* [out] */ LPDWORD SettingsValue);

long SvcResetStoragePolicySettings( 
    /* [in] */ handle_t IDL_handle);

long SvcSetStorageSettings( 
    /* [in] */ handle_t IDL_handle);

long SvcTriggerStorageCleanup( 
    /* [in] */ handle_t IDL_handle);

long SvcTriggerLowStorageNotification( 
    /* [in] */ handle_t IDL_handle);

long SvcMoveFileInheritSecurity( 
    /* [in] */ handle_t IDL_handle);

long SvcScanVolume( 
    /* [in] */ handle_t IDL_handle);

long SvcProcessStorageCardChange( 
    /* [in] */ handle_t IDL_handle);

long SvcProvisionForAppInstall( 
    /* [in] */ handle_t IDL_handle);

long SvcGetStorageInstanceCountForMaps( 
    /* [in] */ handle_t IDL_handle);

long SvcGetStoragePolicySettings( 
    /* [in] */ handle_t IDL_handle);

long SvcSetStoragePolicySettings( 
    /* [in] */ handle_t IDL_handle);

long SvcTriggerStoragePolicies( 
    /* [in] */ handle_t IDL_handle);

long SvcTriggerStorageOptimization( 
    /* [in] */ handle_t IDL_handle);

long SvcPredictStorageHealth( 
    /* [in] */ handle_t IDL_handle);

long SvcGetLastFailedSaveLocationPath( 
    /* [in] */ handle_t IDL_handle);

long SvcExecuteRemoveUserFiles( 
    /* [in] */ handle_t IDL_handle);

long SvcExecuteDehydrateUserFiles( 
    /* [in] */ handle_t IDL_handle);

long SvcGetStorageDeviceSize( 
    /* [in] */ handle_t IDL_handle);

long SvcGetStoragePolicyDefaultValue( 
    /* [in] */ handle_t IDL_handle);

long SvcGetStorageDeviceLowDiskState( 
    /* [in] */ handle_t IDL_handle);

long SvcGetStorageDeviceLowDiskState2( 
    /* [in] */ handle_t IDL_handle);

long SvcSilentCleanupTaskSetEnabledState( 
    /* [in] */ handle_t IDL_handle);

long SvcSilentCleanupTaskGetEnabledState( 
    /* [in] */ handle_t IDL_handle);

long SvcGetStoragePoliciesLastTriggerTime( 
    /* [in] */ handle_t IDL_handle);

long SvcSetStoragePoliciesLastTriggerTime( 
    /* [in] */ handle_t IDL_handle);

long SvcGetSmartAttributes( 
    /* [in] */ handle_t IDL_handle);



extern RPC_IF_HANDLE StorSvc_v0_0_c_ifspec;
extern RPC_IF_HANDLE StorSvc_v0_0_s_ifspec;
#endif /* __StorSvc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


