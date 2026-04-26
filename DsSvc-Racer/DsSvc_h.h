

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for DsSvc.idl:
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


#ifndef __DsSvc_h_h__
#define __DsSvc_h_h__

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

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __DsSvc_INTERFACE_DEFINED__
#define __DsSvc_INTERFACE_DEFINED__

/* interface DsSvc */
/* [version][uuid] */ 

typedef 
enum _DS_TOKEN_LIFETIME_TYPE
    {
        DS_TOKEN_LIFETIME_TYPE_Type0	= 0,
        DS_TOKEN_LIFETIME_TYPE_Type1	= ( DS_TOKEN_LIFETIME_TYPE_Type0 + 1 ) 
    } 	DS_TOKEN_LIFETIME_TYPE;

typedef enum _DS_TOKEN_LIFETIME_TYPE *PDS_TOKEN_LIFETIME_TYPE;

typedef 
enum _DS_TOKEN_USAGE
    {
        DS_TOKEN_USAGE_Type0	= 0,
        DS_TOKEN_USAGE_Type1	= ( DS_TOKEN_USAGE_Type0 + 1 ) 
    } 	DS_TOKEN_USAGE;

typedef enum _DS_TOKEN_USAGE *PDS_TOKEN_USAGE;

typedef 
enum _DS_SHARE_PERMISSION
    {
        DS_SHARE_PERMISSION_Read	= 0,
        DS_SHARE_PERMISSION_Write	= ( DS_SHARE_PERMISSION_Read + 1 ) ,
        DS_SHARE_PERMISSION_ReadWrite	= ( DS_SHARE_PERMISSION_Write + 1 ) 
    } 	DS_SHARE_PERMISSION;

typedef enum _DS_SHARE_PERMISSION *PDS_SHARE_PERMISSION;

typedef 
enum _DS_SHARE_MODE
    {
        DS_SHARE_MODE_None	= 0,
        DS_SHARE_MODE_Write	= ( DS_SHARE_MODE_None + 1 ) ,
        DS_SHARE_MODE_ReadWrite	= ( DS_SHARE_MODE_Write + 1 ) ,
        DS_SHARE_MODE_Delete	= ( DS_SHARE_MODE_ReadWrite + 1 ) ,
        DS_SHARE_MODE_ReadDelete	= ( DS_SHARE_MODE_Delete + 1 ) ,
        DS_SHARE_MODE_WriteDelete	= ( DS_SHARE_MODE_ReadDelete + 1 ) ,
        DS_SHARE_MODE_ReadWriteDelete	= ( DS_SHARE_MODE_WriteDelete + 1 ) 
    } 	DS_SHARE_MODE;

typedef enum _DS_SHARE_MODE *PDS_SHARE_MODE;

typedef 
enum _DS_SCOPE_TYPE
    {
        UserSid	= 0
    } 	DS_SCOPE_TYPE;

typedef enum _DS_SCOPE_TYPE *PDS_SCOPE_TYPE;

typedef 
enum _DS_OPEN_FLAGS
    {
        DS_OPEN_FLAGS_None	= 0,
        DS_OPEN_FLAGS_OpenFlagOverlapped	= 1,
        DS_OPEN_FLAGS_DeleteOnClose	= 2
    } 	DS_OPEN_FLAGS;

typedef enum _DS_OPEN_FLAGS *PDS_OPEN_FLAGS;

typedef struct _DS_SHARE_SCOPE_ENTRY
    {
    DS_SCOPE_TYPE ScopeType;
    /* [string][unique] */ wchar_t *ScopeValue;
    } 	DS_SHARE_SCOPE_ENTRY;

typedef struct _DS_SHARE_SCOPE_ENTRY *PDS_SHARE_SCOPE_ENTRY;

typedef struct _DS_SHARE_SCOPE
    {
    long ScopeCount;
    /* [length_is][size_is] */ DS_SHARE_SCOPE_ENTRY Scopes[ 20 ];
    } 	DS_SHARE_SCOPE;

typedef struct _DS_SHARE_SCOPE *PDS_SHARE_SCOPE;

typedef struct _DS_SHARE_ACCESS_CONTROL
    {
    DS_SHARE_PERMISSION SharePermission;
    DS_SHARE_MODE ShareMode;
    DS_SHARE_SCOPE Scope;
    } 	DS_SHARE_ACCESS_CONTROL;

typedef struct _DS_SHARE_ACCESS_CONTROL *PDS_SHARE_ACCESS_CONTROL;

long RpcDSSCreateSharedFileToken( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *filepath,
    /* [in] */ PDS_SHARE_ACCESS_CONTROL access_control,
    DS_TOKEN_LIFETIME_TYPE token_lifetime,
    DS_TOKEN_USAGE token_usage,
    /* [string][ref][out] */ wchar_t **token);

long RpcDSSGetSharedFileName( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *token,
    /* [string][ref][out] */ wchar_t **file_name);

long RpcDSSGetSharingTokenInformation( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *token,
    /* [string][ref][out] */ wchar_t **filepath,
    /* [string][ref][out] */ wchar_t **user_sid,
    /* [ref][out] */ PDS_SHARE_PERMISSION share_permission);

long RpcDSSDelegateSharingToken( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *token,
    /* [in] */ PDS_SHARE_ACCESS_CONTROL access_control);

long RpcDSSRemoveSharingToken( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *token);

long RpcDSSOpenSharedFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *token,
    /* [in] */ DS_OPEN_FLAGS flags,
    /* [out] */ hyper *file_handle);

long RpcDSSCopyFromSharedFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *token,
    /* [string][in] */ wchar_t *dest_file);

long RpcDSSRemoveExpiredTokens( 
    /* [in] */ handle_t IDL_handle);



extern RPC_IF_HANDLE DsSvc_v1_0_c_ifspec;
extern RPC_IF_HANDLE DsSvc_v1_0_s_ifspec;
#endif /* __DsSvc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


