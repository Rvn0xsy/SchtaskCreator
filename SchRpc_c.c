

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for .\SchRpc.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "SchRpc.h"

#define TYPE_FORMAT_STRING_SIZE   333                               
#define PROC_FORMAT_STRING_SIZE   1167                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _SchRpc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } SchRpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _SchRpc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } SchRpc_MIDL_PROC_FORMAT_STRING;

typedef struct _SchRpc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } SchRpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const SchRpc_MIDL_TYPE_FORMAT_STRING SchRpc__MIDL_TypeFormatString;
extern const SchRpc_MIDL_PROC_FORMAT_STRING SchRpc__MIDL_ProcFormatString;
extern const SchRpc_MIDL_EXPR_FORMAT_STRING SchRpc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: ITaskSchedulerService, ver. 1.0,
   GUID={0x86D35949,0x83C9,0x4044,{0xB4,0x24,0xDB,0x36,0x32,0x31,0xFD,0x0C}} */



static const RPC_CLIENT_INTERFACE ITaskSchedulerService___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x86D35949,0x83C9,0x4044,{0xB4,0x24,0xDB,0x36,0x32,0x31,0xFD,0x0C}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE ITaskSchedulerService_v1_0_c_ifspec = (RPC_IF_HANDLE)& ITaskSchedulerService___RpcClientInterface;

extern const MIDL_STUB_DESC ITaskSchedulerService_StubDesc;

static RPC_BINDING_HANDLE ITaskSchedulerService__MIDL_AutoBindHandle;


HRESULT SchRpcHighestVersion( 
    /* [in] */ handle_t IDL_handle,
    /* [out] */ DWORD *pVersion)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcRegisterTask( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][string][in] */ const wchar_t *path,
    /* [string][in] */ const wchar_t *xml,
    /* [in] */ DWORD flags,
    /* [unique][string][in] */ const wchar_t *sddl,
    /* [in] */ DWORD logonType,
    /* [in] */ DWORD cCreds,
    /* [unique][size_is][in] */ const TASK_USER_CRED *pCreds,
    /* [string][out] */ wchar_t **pActualPath,
    /* [out] */ PTASK_XML_ERROR_INFO *pErrorInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[40],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcRetrieveTask( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [string][in] */ const wchar_t *lpcwszLanguagesBuffer,
    /* [in] */ unsigned long *pulNumLanguages,
    /* [string][out] */ wchar_t **pXml)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[128],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcCreateFolder( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [unique][string][in] */ const wchar_t *sddl,
    /* [in] */ DWORD flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[186],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcSetSecurity( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [string][in] */ const wchar_t *sddl,
    /* [in] */ DWORD flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[238],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcGetSecurity( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [in] */ DWORD securityInformation,
    /* [string][out] */ wchar_t **sddl)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[290],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcEnumFolders( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [in] */ DWORD flags,
    /* [out][in] */ DWORD *pStartIndex,
    /* [in] */ DWORD cRequested,
    /* [out] */ DWORD *pcNames,
    /* [size_is][size_is][string][out] */ TASK_NAMES *pNames)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[342],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcEnumTasks( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [in] */ DWORD flags,
    /* [out][in] */ DWORD *startIndex,
    /* [in] */ DWORD cRequested,
    /* [out] */ DWORD *pcNames,
    /* [size_is][size_is][string][out] */ TASK_NAMES *pNames)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[412],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcEnumInstances( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][string][in] */ const wchar_t *path,
    /* [in] */ DWORD flags,
    /* [out] */ DWORD *pcGuids,
    /* [size_is][size_is][out] */ GUID **pGuids)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[482],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcGetInstanceInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ GUID guid,
    /* [string][out] */ wchar_t **pPath,
    /* [out] */ DWORD *pState,
    /* [string][out] */ wchar_t **pCurrentAction,
    /* [string][out] */ wchar_t **pInfo,
    /* [out] */ DWORD *pcGroupInstances,
    /* [size_is][size_is][out] */ GUID **pGroupInstances,
    /* [out] */ DWORD *pEnginePID)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[540],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcStopInstance( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ GUID guid,
    /* [in] */ DWORD flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[622],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcStop( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][string][in] */ const wchar_t *path,
    /* [in] */ DWORD flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[668],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcRun( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [in] */ DWORD cArgs,
    /* [unique][size_is][string][in] */ const wchar_t **pArgs,
    /* [in] */ DWORD flags,
    /* [in] */ DWORD sessionId,
    /* [string][unique][in] */ const wchar_t *user,
    /* [out] */ GUID *pGuid)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[714],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcDelete( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [in] */ DWORD flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[790],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcRename( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [string][in] */ const wchar_t *newName,
    /* [in] */ DWORD flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[836],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcScheduledRuntimes( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [unique][in] */ PSYSTEMTIME start,
    /* [unique][in] */ PSYSTEMTIME end,
    /* [in] */ DWORD flags,
    /* [in] */ DWORD cRequested,
    /* [out] */ DWORD *pcRuntimes,
    /* [size_is][size_is][out] */ PSYSTEMTIME *pRuntimes)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[888],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcGetLastRunInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [out] */ PSYSTEMTIME pLastRuntime,
    /* [out] */ DWORD *pLastReturnCode)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[964],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcGetTaskInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [in] */ DWORD flags,
    /* [out] */ DWORD *pEnabled,
    /* [out] */ DWORD *pState)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[1016],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcGetNumberOfMissedRuns( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [out] */ DWORD *pNumberOfMissedRuns)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[1074],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SchRpcEnableTask( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ const wchar_t *path,
    /* [in] */ DWORD enabled)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ITaskSchedulerService_StubDesc,
                  (PFORMAT_STRING) &SchRpc__MIDL_ProcFormatString.Format[1120],
                  ( unsigned char * )&IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const SchRpc_MIDL_PROC_FORMAT_STRING SchRpc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure SchRpcHighestVersion */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVersion */

/* 28 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 34 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcRegisterTask */

/* 40 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 42 */	NdrFcLong( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x1 ),	/* 1 */
/* 48 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 50 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 54 */	NdrFcShort( 0x18 ),	/* 24 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 60 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x1 ),	/* 1 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 68 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 70 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 72 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter xml */

/* 74 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 76 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 78 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter flags */

/* 80 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 82 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 84 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sddl */

/* 86 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 88 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 90 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter logonType */

/* 92 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 94 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 96 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cCreds */

/* 98 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 100 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCreds */

/* 104 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 106 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 108 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter pActualPath */

/* 110 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 112 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 114 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter pErrorInfo */

/* 116 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 118 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 120 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Return value */

/* 122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 124 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcRetrieveTask */

/* 128 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x2 ),	/* 2 */
/* 136 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 138 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 142 */	NdrFcShort( 0x1c ),	/* 28 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 156 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter lpcwszLanguagesBuffer */

/* 162 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 166 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter pulNumLanguages */

/* 168 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pXml */

/* 174 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 176 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 178 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 182 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcCreateFolder */

/* 186 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x3 ),	/* 3 */
/* 194 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 196 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 206 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 214 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 218 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter sddl */

/* 220 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 222 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 224 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter flags */

/* 226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 228 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 234 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcSetSecurity */

/* 238 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x4 ),	/* 4 */
/* 246 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 248 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 256 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 258 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 266 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 270 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter sddl */

/* 272 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 276 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter flags */

/* 278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 286 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcGetSecurity */

/* 290 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x5 ),	/* 5 */
/* 298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 300 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 318 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter securityInformation */

/* 324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sddl */

/* 330 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 334 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcEnumFolders */

/* 342 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x6 ),	/* 6 */
/* 350 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 352 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 356 */	NdrFcShort( 0x2c ),	/* 44 */
/* 358 */	NdrFcShort( 0x40 ),	/* 64 */
/* 360 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 362 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 370 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 374 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter flags */

/* 376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 378 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pStartIndex */

/* 382 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cRequested */

/* 388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 390 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcNames */

/* 394 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 396 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNames */

/* 400 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 402 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 404 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 408 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcEnumTasks */

/* 412 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x7 ),	/* 7 */
/* 420 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 422 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 426 */	NdrFcShort( 0x2c ),	/* 44 */
/* 428 */	NdrFcShort( 0x40 ),	/* 64 */
/* 430 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 432 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 440 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 444 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter flags */

/* 446 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startIndex */

/* 452 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 454 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cRequested */

/* 458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 460 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcNames */

/* 464 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 466 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNames */

/* 470 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 472 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 474 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 478 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcEnumInstances */

/* 482 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 490 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 492 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 498 */	NdrFcShort( 0x24 ),	/* 36 */
/* 500 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 502 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 510 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter flags */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcGuids */

/* 522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pGuids */

/* 528 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 532 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcGetInstanceInfo */

/* 540 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x9 ),	/* 9 */
/* 548 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 550 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 552 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 554 */	NdrFcShort( 0x30 ),	/* 48 */
/* 556 */	NdrFcShort( 0x5c ),	/* 92 */
/* 558 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x9,		/* 9 */
/* 560 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 562 */	NdrFcShort( 0x1 ),	/* 1 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter guid */

/* 568 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 572 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Parameter pPath */

/* 574 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 576 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 578 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter pState */

/* 580 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 582 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCurrentAction */

/* 586 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 588 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 590 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter pInfo */

/* 592 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 594 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 596 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter pcGroupInstances */

/* 598 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 600 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pGroupInstances */

/* 604 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 606 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 608 */	NdrFcShort( 0xde ),	/* Type Offset=222 */

	/* Parameter pEnginePID */

/* 610 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 612 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 618 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcStopInstance */

/* 622 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0xa ),	/* 10 */
/* 630 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 632 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 636 */	NdrFcShort( 0x38 ),	/* 56 */
/* 638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 640 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 642 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter guid */

/* 650 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 654 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Parameter flags */

/* 656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 658 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 664 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcStop */

/* 668 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0xb ),	/* 11 */
/* 676 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 678 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 680 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 686 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 696 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 700 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter flags */

/* 702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 710 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcRun */

/* 714 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0xc ),	/* 12 */
/* 722 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 724 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 726 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 728 */	NdrFcShort( 0x18 ),	/* 24 */
/* 730 */	NdrFcShort( 0x4c ),	/* 76 */
/* 732 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 734 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 742 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 744 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 746 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter cArgs */

/* 748 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 750 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pArgs */

/* 754 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 756 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 758 */	NdrFcShort( 0xf6 ),	/* Type Offset=246 */

	/* Parameter flags */

/* 760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 762 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sessionId */

/* 766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 768 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter user */

/* 772 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 774 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 776 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter pGuid */

/* 778 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 780 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 782 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Return value */

/* 784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 786 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcDelete */

/* 790 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0xd ),	/* 13 */
/* 798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 800 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 808 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 810 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 818 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 822 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter flags */

/* 824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcRename */

/* 836 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0xe ),	/* 14 */
/* 844 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 846 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 848 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 854 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 864 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 866 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 868 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter newName */

/* 870 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 872 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 874 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter flags */

/* 876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 884 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcScheduledRuntimes */

/* 888 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0xf ),	/* 15 */
/* 896 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 898 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 900 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 902 */	NdrFcShort( 0x78 ),	/* 120 */
/* 904 */	NdrFcShort( 0x24 ),	/* 36 */
/* 906 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 908 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 916 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 918 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 920 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter start */

/* 922 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 924 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 926 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Parameter end */

/* 928 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 930 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 932 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Parameter flags */

/* 934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 936 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cRequested */

/* 940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 942 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcRuntimes */

/* 946 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 948 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pRuntimes */

/* 952 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 954 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 956 */	NdrFcShort( 0x130 ),	/* Type Offset=304 */

	/* Return value */

/* 958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 960 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcGetLastRunInfo */

/* 964 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x10 ),	/* 16 */
/* 972 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 974 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 976 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x58 ),	/* 88 */
/* 982 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 984 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 992 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 996 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter pLastRuntime */

/* 998 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1002 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Parameter pLastReturnCode */

/* 1004 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1012 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcGetTaskInfo */

/* 1016 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1024 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1026 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1032 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1036 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 1044 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter flags */

/* 1050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pEnabled */

/* 1056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pState */

/* 1062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1064 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcGetNumberOfMissedRuns */

/* 1074 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1084 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1086 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1092 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1094 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 1102 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1106 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter pNumberOfMissedRuns */

/* 1108 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SchRpcEnableTask */

/* 1120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1130 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1140 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 1148 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1152 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter enabled */

/* 1154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const SchRpc_MIDL_TYPE_FORMAT_STRING SchRpc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  8 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 12 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 14 */	
			0x12, 0x0,	/* FC_UP */
/* 16 */	NdrFcShort( 0x22 ),	/* Offset= 34 (50) */
/* 18 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0xc ),	/* 12 */
/* 22 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 24 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */
/* 30 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 32 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x4 ),	/* 4 */
/* 40 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 42 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 44 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 46 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 48 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 50 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 52 */	NdrFcShort( 0xc ),	/* 12 */
/* 54 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 56 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 58 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 60 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 64 */	NdrFcShort( 0xc ),	/* 12 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x2 ),	/* 2 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 76 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 78 */	NdrFcShort( 0x4 ),	/* 4 */
/* 80 */	NdrFcShort( 0x4 ),	/* 4 */
/* 82 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 84 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 88 */	0x0,		/* 0 */
			NdrFcShort( 0xffb9 ),	/* Offset= -71 (18) */
			0x5b,		/* FC_END */
/* 92 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 94 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (6) */
/* 96 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x12, 0x0,	/* FC_UP */
/* 102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (104) */
/* 104 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 106 */	NdrFcShort( 0x10 ),	/* 16 */
/* 108 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 110 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 118 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 120 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 122 */	NdrFcShort( 0xc ),	/* 12 */
/* 124 */	NdrFcShort( 0xc ),	/* 12 */
/* 126 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 128 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 130 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 132 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 134 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 136 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 138 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 140 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 142 */	NdrFcShort( 0x2 ),	/* Offset= 2 (144) */
/* 144 */	
			0x12, 0x0,	/* FC_UP */
/* 146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (148) */
/* 148 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 152 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 154 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 156 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 158 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 160 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 162 */	NdrFcShort( 0x4 ),	/* 4 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 174 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 176 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 178 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 180 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 182 */	NdrFcShort( 0x2 ),	/* Offset= 2 (184) */
/* 184 */	
			0x12, 0x0,	/* FC_UP */
/* 186 */	NdrFcShort( 0x14 ),	/* Offset= 20 (206) */
/* 188 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 192 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 194 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 196 */	NdrFcShort( 0x10 ),	/* 16 */
/* 198 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 200 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 202 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (188) */
			0x5b,		/* FC_END */
/* 206 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 208 */	NdrFcShort( 0x10 ),	/* 16 */
/* 210 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 214 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 216 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 218 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (194) */
/* 220 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 222 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 224 */	NdrFcShort( 0x2 ),	/* Offset= 2 (226) */
/* 226 */	
			0x12, 0x0,	/* FC_UP */
/* 228 */	NdrFcShort( 0x2 ),	/* Offset= 2 (230) */
/* 230 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 232 */	NdrFcShort( 0x10 ),	/* 16 */
/* 234 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 236 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 238 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 240 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 242 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (194) */
/* 244 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 246 */	
			0x12, 0x0,	/* FC_UP */
/* 248 */	NdrFcShort( 0x2 ),	/* Offset= 2 (250) */
/* 250 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 252 */	NdrFcShort( 0x4 ),	/* 4 */
/* 254 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 258 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 260 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 262 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 264 */	NdrFcShort( 0x4 ),	/* 4 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 276 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 278 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 280 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 282 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 284 */	NdrFcShort( 0xffa6 ),	/* Offset= -90 (194) */
/* 286 */	
			0x12, 0x0,	/* FC_UP */
/* 288 */	NdrFcShort( 0x2 ),	/* Offset= 2 (290) */
/* 290 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 292 */	NdrFcShort( 0x10 ),	/* 16 */
/* 294 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 296 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 298 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 300 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 302 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 304 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 306 */	NdrFcShort( 0x2 ),	/* Offset= 2 (308) */
/* 308 */	
			0x12, 0x0,	/* FC_UP */
/* 310 */	NdrFcShort( 0x2 ),	/* Offset= 2 (312) */
/* 312 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 314 */	NdrFcShort( 0x10 ),	/* 16 */
/* 316 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 318 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 320 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 322 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 324 */	NdrFcShort( 0xffde ),	/* Offset= -34 (290) */
/* 326 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 328 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 330 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (290) */

			0x0
        }
    };

static const unsigned short ITaskSchedulerService_FormatStringOffsetTable[] =
    {
    0,
    40,
    128,
    186,
    238,
    290,
    342,
    412,
    482,
    540,
    622,
    668,
    714,
    790,
    836,
    888,
    964,
    1016,
    1074,
    1120
    };


static const MIDL_STUB_DESC ITaskSchedulerService_StubDesc = 
    {
    (void *)& ITaskSchedulerService___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &ITaskSchedulerService__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    SchRpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

