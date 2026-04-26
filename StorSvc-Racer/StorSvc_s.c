

/* this ALWAYS GENERATED file contains the RPC server stubs */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>
#include "StorSvc_h.h"

#define TYPE_FORMAT_STRING_SIZE   69                                
#define PROC_FORMAT_STRING_SIZE   1351                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _StorSvc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } StorSvc_MIDL_TYPE_FORMAT_STRING;

typedef struct _StorSvc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } StorSvc_MIDL_PROC_FORMAT_STRING;

typedef struct _StorSvc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } StorSvc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const StorSvc_MIDL_TYPE_FORMAT_STRING StorSvc__MIDL_TypeFormatString;
extern const StorSvc_MIDL_PROC_FORMAT_STRING StorSvc__MIDL_ProcFormatString;
extern const StorSvc_MIDL_EXPR_FORMAT_STRING StorSvc__MIDL_ExprFormatString;

/* Standard interface: StorSvc, ver. 0.0,
   GUID={0x44D1520B,0x6133,0x41F0,{0x8A,0x66,0xD3,0x73,0x05,0xEC,0xC3,0x57}} */


extern const MIDL_SERVER_INFO StorSvc_ServerInfo;

extern const RPC_DISPATCH_TABLE StorSvc_v0_0_DispatchTable;

static const RPC_SERVER_INTERFACE StorSvc___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x44D1520B,0x6133,0x41F0,{0x8A,0x66,0xD3,0x73,0x05,0xEC,0xC3,0x57}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&StorSvc_v0_0_DispatchTable,
    0,
    0,
    0,
    &StorSvc_ServerInfo,
    0x06000000
    };
RPC_IF_HANDLE StorSvc_v0_0_s_ifspec = (RPC_IF_HANDLE)& StorSvc___RpcServerInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC StorSvc_StubDesc;
#ifdef __cplusplus
}
#endif


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const StorSvc_MIDL_PROC_FORMAT_STRING StorSvc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure SvcMountVolume */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcDismountVolume */

/* 36 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 46 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 48 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 56 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcFormatVolume */

/* 72 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x2 ),	/* 2 */
/* 80 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 82 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 92 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetStorageInstanceCount */

/* 108 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x3 ),	/* 3 */
/* 116 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 118 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 122 */	NdrFcShort( 0x6 ),	/* 6 */
/* 124 */	NdrFcShort( 0x24 ),	/* 36 */
/* 126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 128 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DeviceType */

/* 138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 142 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter DevicesCount */

/* 144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 146 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetStorageDeviceInfo */

/* 156 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x4 ),	/* 4 */
/* 164 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 166 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 170 */	NdrFcShort( 0xe ),	/* 14 */
/* 172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 174 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 176 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DeviceType */

/* 186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 190 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter DeviceIndex */

/* 192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 194 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DeviceInfo */

/* 198 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 200 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 202 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Return value */

/* 204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 206 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CleanupItem */

/* 210 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x5 ),	/* 5 */
/* 218 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 220 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 228 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 230 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 242 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcRebootToFlashingMode */

/* 246 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x6 ),	/* 6 */
/* 254 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 256 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 258 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 266 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcRebootToUosFlashing */

/* 282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x7 ),	/* 7 */
/* 290 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 292 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 300 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 302 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcFinalizeVolume */

/* 318 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 328 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 330 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 336 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 338 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetStorageSettings */

/* 354 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x9 ),	/* 9 */
/* 362 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 364 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 368 */	NdrFcShort( 0x14 ),	/* 20 */
/* 370 */	NdrFcShort( 0x24 ),	/* 36 */
/* 372 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 374 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DeviceType */

/* 384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 386 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 388 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter DeviceIndex */

/* 390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 392 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SettingsType */

/* 396 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 398 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 400 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter SettingsValue */

/* 402 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 404 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 410 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcResetStoragePolicySettings */

/* 414 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0xa ),	/* 10 */
/* 422 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 424 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 426 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 432 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 434 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 446 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcSetStorageSettings */

/* 450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0xb ),	/* 11 */
/* 458 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 460 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 468 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 470 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcTriggerStorageCleanup */

/* 486 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0xc ),	/* 12 */
/* 494 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 496 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 498 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 504 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 506 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 518 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcTriggerLowStorageNotification */

/* 522 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0xd ),	/* 13 */
/* 530 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 532 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 534 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 540 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 542 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcMoveFileInheritSecurity */

/* 558 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0xe ),	/* 14 */
/* 566 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 568 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 570 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 576 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 578 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 590 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcScanVolume */

/* 594 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0xf ),	/* 15 */
/* 602 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 604 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 606 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 612 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 614 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcProcessStorageCardChange */

/* 630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x10 ),	/* 16 */
/* 638 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 640 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 642 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 648 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 650 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcProvisionForAppInstall */

/* 666 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x11 ),	/* 17 */
/* 674 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 676 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 678 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 684 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 686 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 698 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetStorageInstanceCountForMaps */

/* 702 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x12 ),	/* 18 */
/* 710 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 712 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 714 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 720 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 722 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 734 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetStoragePolicySettings */

/* 738 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x13 ),	/* 19 */
/* 746 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 748 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 756 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 758 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 770 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcSetStoragePolicySettings */

/* 774 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x14 ),	/* 20 */
/* 782 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 784 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 786 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 794 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 806 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcTriggerStoragePolicies */

/* 810 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x15 ),	/* 21 */
/* 818 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 820 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 822 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 828 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 830 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcTriggerStorageOptimization */

/* 846 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x16 ),	/* 22 */
/* 854 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 856 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 858 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 864 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 866 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 878 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcPredictStorageHealth */

/* 882 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x17 ),	/* 23 */
/* 890 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 892 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 902 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 914 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetLastFailedSaveLocationPath */

/* 918 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x18 ),	/* 24 */
/* 926 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 928 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 936 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 938 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 950 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcExecuteRemoveUserFiles */

/* 954 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x19 ),	/* 25 */
/* 962 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 964 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 966 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 972 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 974 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 986 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcExecuteDehydrateUserFiles */

/* 990 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x1a ),	/* 26 */
/* 998 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1000 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1008 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1010 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1022 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetStorageDeviceSize */

/* 1026 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1034 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1036 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1038 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1044 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1046 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1058 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetStoragePolicyDefaultValue */

/* 1062 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1070 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1072 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1074 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1080 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1082 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1094 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetStorageDeviceLowDiskState */

/* 1098 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1108 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1110 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1118 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1130 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetStorageDeviceLowDiskState2 */

/* 1134 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1142 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1144 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1146 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1154 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcSilentCleanupTaskSetEnabledState */

/* 1170 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1178 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1180 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1182 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1190 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1202 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcSilentCleanupTaskGetEnabledState */

/* 1206 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1214 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1216 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1218 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1224 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1226 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1238 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetStoragePoliciesLastTriggerTime */

/* 1242 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1250 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1252 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1254 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1260 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1262 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcSetStoragePoliciesLastTriggerTime */

/* 1278 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1286 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1288 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1296 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1298 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1310 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SvcGetSmartAttributes */

/* 1314 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1322 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1324 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1326 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1332 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1334 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const StorSvc_MIDL_TYPE_FORMAT_STRING StorSvc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x0,	/* FC_RP */
/*  8 */	NdrFcShort( 0x1a ),	/* Offset= 26 (34) */
/* 10 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x208 ),	/* 520 */
/* 14 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 16 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 18 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 22 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x10 ),	/* 16 */
/* 26 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 28 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 30 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (16) */
			0x5b,		/* FC_END */
/* 34 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 36 */	NdrFcShort( 0x458 ),	/* 1112 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x0 ),	/* Offset= 0 (40) */
/* 42 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 44 */	0x0,		/* 0 */
			NdrFcShort( 0xffdd ),	/* Offset= -35 (10) */
			0xd,		/* FC_ENUM16 */
/* 48 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 50 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 52 */	0xd,		/* FC_ENUM16 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 54 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (22) */
			0xd,		/* FC_ENUM16 */
/* 58 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 60 */	0x0,		/* 0 */
			NdrFcShort( 0xffcd ),	/* Offset= -51 (10) */
			0x8,		/* FC_LONG */
/* 64 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 66 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short StorSvc_FormatStringOffsetTable[] =
    {
    0,
    36,
    72,
    108,
    156,
    210,
    246,
    282,
    318,
    354,
    414,
    450,
    486,
    522,
    558,
    594,
    630,
    666,
    702,
    738,
    774,
    810,
    846,
    882,
    918,
    954,
    990,
    1026,
    1062,
    1098,
    1134,
    1170,
    1206,
    1242,
    1278,
    1314
    };


static const RPC_DISPATCH_FUNCTION StorSvc_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE StorSvc_v0_0_DispatchTable = 
    {
    36,
    (RPC_DISPATCH_FUNCTION*)StorSvc_table
    };


#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC server stubs */


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

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_CHAR
__midl_frag85_t;
extern const __midl_frag85_t __midl_frag85;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag84_t;
extern const __midl_frag84_t __midl_frag84;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag31_t;
extern const __midl_frag31_t __midl_frag31;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag27_t;
extern const __midl_frag27_t __midl_frag27;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag85_t __midl_frag85 =
0x5    /* FC64_INT32 */;

static const __midl_frag84_t __midl_frag84 =
{ 
/* SvcGetSmartAttributes */
    { 
    /* SvcGetSmartAttributes */      /* procedure SvcGetSmartAttributes */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag85,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag31_t __midl_frag31 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag85
};

static const __midl_frag27_t __midl_frag27 =
{ 
/* SvcGetStorageSettings */
    { 
    /* SvcGetStorageSettings */      /* procedure SvcGetStorageSettings */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* DeviceType */      /* parameter DeviceType */
        &__midl_frag85,
        { 
        /* DeviceType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* DeviceIndex */      /* parameter DeviceIndex */
        &__midl_frag85,
        { 
        /* DeviceIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* SettingsType */      /* parameter SettingsType */
        &__midl_frag85,
        { 
        /* SettingsType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* SettingsValue */      /* parameter SettingsValue */
        &__midl_frag85,
        { 
        /* SettingsValue */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag85,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag17_t __midl_frag17 =
{ 
/* STORAGE_DEVICE_INFO */
    { 
    /* STORAGE_DEVICE_INFO */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* STORAGE_DEVICE_INFO */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1112 /* 0x458 */
    }
};

static const __midl_frag16_t __midl_frag16 =
{ 
/* *STORAGE_DEVICE_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag17
};

static const __midl_frag13_t __midl_frag13 =
{ 
/* SvcGetStorageDeviceInfo */
    { 
    /* SvcGetStorageDeviceInfo */      /* procedure SvcGetStorageDeviceInfo */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 1216 /* 0x4c0 */,
        (NDR64_UINT32) 1208 /* 0x4b8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* DeviceType */      /* parameter DeviceType */
        &__midl_frag85,
        { 
        /* DeviceType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* DeviceIndex */      /* parameter DeviceIndex */
        &__midl_frag85,
        { 
        /* DeviceIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* DeviceInfo */      /* parameter DeviceInfo */
        &__midl_frag17,
        { 
        /* DeviceInfo */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag85,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag8_t __midl_frag8 =
{ 
/* SvcGetStorageInstanceCount */
    { 
    /* SvcGetStorageInstanceCount */      /* procedure SvcGetStorageInstanceCount */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* DeviceType */      /* parameter DeviceType */
        &__midl_frag85,
        { 
        /* DeviceType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* DevicesCount */      /* parameter DevicesCount */
        &__midl_frag85,
        { 
        /* DevicesCount */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag85,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"


static const FormatInfoRef StorSvc_Ndr64ProcTable[] =
    {
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag8,
    &__midl_frag13,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag27,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84,
    &__midl_frag84
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC StorSvc_StubDesc = 
    {
    (void *)& StorSvc___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    StorSvc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& StorSvc_ServerInfo,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

static const RPC_DISPATCH_FUNCTION StorSvc_NDR64__table[] =
    {
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    0
    };
static const RPC_DISPATCH_TABLE StorSvc_NDR64__v0_0_DispatchTable = 
    {
    36,
    (RPC_DISPATCH_FUNCTION*)StorSvc_NDR64__table
    };

static const MIDL_SYNTAX_INFO StorSvc_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&StorSvc_v0_0_DispatchTable,
    StorSvc__MIDL_ProcFormatString.Format,
    StorSvc_FormatStringOffsetTable,
    StorSvc__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    (RPC_DISPATCH_TABLE*)&StorSvc_NDR64__v0_0_DispatchTable,
    0 ,
    (unsigned short *) StorSvc_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };


static const SERVER_ROUTINE StorSvc_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)SvcMountVolume,
    (SERVER_ROUTINE)SvcDismountVolume,
    (SERVER_ROUTINE)SvcFormatVolume,
    (SERVER_ROUTINE)SvcGetStorageInstanceCount,
    (SERVER_ROUTINE)SvcGetStorageDeviceInfo,
    (SERVER_ROUTINE)CleanupItem,
    (SERVER_ROUTINE)SvcRebootToFlashingMode,
    (SERVER_ROUTINE)SvcRebootToUosFlashing,
    (SERVER_ROUTINE)SvcFinalizeVolume,
    (SERVER_ROUTINE)SvcGetStorageSettings,
    (SERVER_ROUTINE)SvcResetStoragePolicySettings,
    (SERVER_ROUTINE)SvcSetStorageSettings,
    (SERVER_ROUTINE)SvcTriggerStorageCleanup,
    (SERVER_ROUTINE)SvcTriggerLowStorageNotification,
    (SERVER_ROUTINE)SvcMoveFileInheritSecurity,
    (SERVER_ROUTINE)SvcScanVolume,
    (SERVER_ROUTINE)SvcProcessStorageCardChange,
    (SERVER_ROUTINE)SvcProvisionForAppInstall,
    (SERVER_ROUTINE)SvcGetStorageInstanceCountForMaps,
    (SERVER_ROUTINE)SvcGetStoragePolicySettings,
    (SERVER_ROUTINE)SvcSetStoragePolicySettings,
    (SERVER_ROUTINE)SvcTriggerStoragePolicies,
    (SERVER_ROUTINE)SvcTriggerStorageOptimization,
    (SERVER_ROUTINE)SvcPredictStorageHealth,
    (SERVER_ROUTINE)SvcGetLastFailedSaveLocationPath,
    (SERVER_ROUTINE)SvcExecuteRemoveUserFiles,
    (SERVER_ROUTINE)SvcExecuteDehydrateUserFiles,
    (SERVER_ROUTINE)SvcGetStorageDeviceSize,
    (SERVER_ROUTINE)SvcGetStoragePolicyDefaultValue,
    (SERVER_ROUTINE)SvcGetStorageDeviceLowDiskState,
    (SERVER_ROUTINE)SvcGetStorageDeviceLowDiskState2,
    (SERVER_ROUTINE)SvcSilentCleanupTaskSetEnabledState,
    (SERVER_ROUTINE)SvcSilentCleanupTaskGetEnabledState,
    (SERVER_ROUTINE)SvcGetStoragePoliciesLastTriggerTime,
    (SERVER_ROUTINE)SvcSetStoragePoliciesLastTriggerTime,
    (SERVER_ROUTINE)SvcGetSmartAttributes
    };

static const MIDL_SERVER_INFO StorSvc_ServerInfo = 
    {
    &StorSvc_StubDesc,
    StorSvc_ServerRoutineTable,
    StorSvc__MIDL_ProcFormatString.Format,
    (unsigned short *) StorSvc_FormatStringOffsetTable,
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)StorSvc_SyntaxInfo
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

