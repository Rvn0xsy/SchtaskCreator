// SchtaskCreator.cpp : 定义应用程序的入口点。
//

#include "framework.h"
#include "SchtaskCreator.h"
#include "SchRpc.h"
#include <taskschd.h>

#pragma comment(lib, "rpcrt4.lib")

#define MAX_LOADSTRING 2048

WCHAR szDefaultTaskXML[MAX_LOADSTRING];

INT_PTR CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

void __RPC_FAR* __RPC_USER midl_user_allocate(size_t cBytes)
{
    return((void __RPC_FAR*) malloc(cBytes));
}

void __RPC_USER midl_user_free(void __RPC_FAR* p)
{
    free(p);
}



int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    
    // TODO: 在此处放置代码。
    // 
    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_SCHTASKCREATOR));
    MSG msg;
    LoadString(hInstance, IDS_TASK_XML, szDefaultTaskXML, MAX_LOADSTRING);

    DialogBox(hInstance, MAKEINTRESOURCE(IDD_MAIN), NULL, WndProc);
    
    // 主消息循环:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}

BOOL RegisterNewTask(PWCHAR username, PWCHAR password, PWCHAR domain, PWCHAR task_xml, PWCHAR ip_address, BOOL is_local, BOOL just_run) {
    RPC_STATUS status;
    RPC_WSTR StringBinding;
    RPC_BINDING_HANDLE Binding;
    PWCHAR ConnectProtocol = NULL;
    WCHAR ConnectRemoteProtocol[] = L"ncacn_ip_tcp";
    WCHAR ConnectLocalProtocol[] = L"ncalrpc";
    RPC_WSTR Hostname = NULL;
    SEC_WINNT_AUTH_IDENTITY_W Auth;

    if (lstrlenW(domain) == 0) {
        Auth.Domain = NULL; 
        Auth.DomainLength = 0;
    }
    else {
        Auth.Domain = (RPC_WSTR)domain;
        Auth.DomainLength = lstrlenW(domain);
    }
   
    if (is_local) {
        ConnectProtocol = ConnectLocalProtocol;
    }
    else {
        ConnectProtocol = ConnectRemoteProtocol;
        Auth.User = (RPC_WSTR)username; // username
        Auth.Password = (RPC_WSTR)password; // password
        Auth.Flags = SEC_WINNT_AUTH_IDENTITY_UNICODE;
        Auth.UserLength = lstrlenW(username);
        Auth.PasswordLength = lstrlenW(password);
        Hostname = (RPC_WSTR)ip_address;
    }

    status = RpcStringBindingCompose(
        NULL,                        // Interface's GUID, will be handled by NdrClientCall
        (RPC_WSTR)ConnectProtocol,   // Protocol sequence
        Hostname,                    // Network address
        NULL,                        // Endpoint
        NULL,                        // No options here
        &StringBinding               // Output string binding
    );

    if (status != RPC_S_OK) {
        // printf("RpcStringBindingCompose failed - %x\n", status);
        return FALSE;
    }

    status = RpcBindingFromStringBinding(
        StringBinding,              // Previously created string binding
        &Binding                    // Output binding handle
    );

    if (status != RPC_S_OK) {
        // printf("RpcBindingFromStringBindingA failed - %x\n", status);
        return FALSE;
    }
    // 如果不是本地认证，则采用网络认证
    if (!is_local) {
        RpcTryExcept{
            status = RpcBindingSetAuthInfo(
                    Binding,
                    Hostname,
                    RPC_C_AUTHN_LEVEL_DEFAULT,
                    RPC_C_AUTHN_DEFAULT,
                    &Auth,
                    NULL
                );
            if (status != RPC_S_OK)
            {
                // printf("RpcBindingSetAuthInfo failed - %d\n", status);
                return FALSE;
            }
            }
            RpcExcept(EXCEPTION_EXECUTE_HANDLER);
            {
                return FALSE;
            }
        RpcEndExcept
    }
    status = RpcStringFree(
        &StringBinding              // Previously created string binding
    );
    RpcTryExcept
    {
        /*
         HRESULT SchRpcCreateFolder(
           [in, string] const wchar_t* path,
           [in, string, unique] const wchar_t* sddl,
           [in] DWORD flags
         );
        */
        static const WCHAR Folder[] = L"\\Hello";
        SchRpcCreateFolder(Binding, Folder, NULL, 0);
        static const WCHAR TaskPath[] = L"\\Hello\\TaskName";
        WCHAR* path = NULL;
        TASK_XML_ERROR_INFO* info = NULL;        
        status = SchRpcRegisterTask(Binding, TaskPath, task_xml, TASK_CREATE | TASK_UPDATE, NULL, TASK_LOGON_NONE, 0, NULL, &path, &info);
        if (status == RPC_S_OK && just_run) {
            GUID  pGuid;
            status = SchRpcRun(Binding, TaskPath, NULL, NULL, TASK_RUN_IGNORE_CONSTRAINTS, NULL, NULL, &pGuid);
        }
    }
    RpcExcept(EXCEPTION_EXECUTE_HANDLER);
    {
        return FALSE;
    }
    RpcEndExcept

    if (status != RPC_S_OK)
        return FALSE;
    status = RpcBindingFree(
        &Binding                    // Reference to the opened binding handle
    );
    return TRUE;
}

INT_PTR CALLBACK WndProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    HWND hTaskXML = GetDlgItem(hDlg, IDC_TASK_XML);
    HWND hUsernameHWD = GetDlgItem(hDlg, IDC_USERNAME);
    HWND hPasswordHWD = GetDlgItem(hDlg, IDC_EDIT_PASSWORD);
    HWND hIPAddressHWD = GetDlgItem(hDlg, IDC_IPADDRESS);
    HWND hDomainHWD = GetDlgItem(hDlg, IDC_DOMAIN);
    PWCHAR szUsername = NULL;
    PWCHAR szPassword = NULL;
    PWCHAR szIPAddress = NULL;
    PWCHAR szTaskXML = NULL;
    PWCHAR szDomain = NULL;
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        SetWindowText(hTaskXML, szDefaultTaskXML);
        CheckDlgButton(hDlg, IDC_JUST_RUN, BST_CHECKED);
        return (INT_PTR)TRUE;
    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            PostQuitMessage(0);
            return (INT_PTR)TRUE;
        }
        if (LOWORD(wParam) == IDC_SUBMIT) {
            DWORD dwTaskXMLSize = GetWindowTextLength(hTaskXML);
            szTaskXML = (PWCHAR)malloc(MAX_LOADSTRING);
            memset(szTaskXML, 0, MAX_LOADSTRING);
            GetDlgItemText(hDlg, IDC_TASK_XML, szTaskXML, MAX_LOADSTRING-1);
            

            BOOL bJustRunTask = IsDlgButtonChecked(hDlg, IDC_JUST_RUN) == BST_CHECKED?TRUE:FALSE;
            if (IsDlgButtonChecked(hDlg, IDC_CHECK) == BST_CHECKED) // 开始本地执行
            {
                if (RegisterNewTask(NULL, NULL, NULL, szTaskXML, NULL, TRUE, bJustRunTask)) {
                    MessageBox(hDlg, L"创建成功！", L"提示消息", MB_OK|MB_ICONINFORMATION);
                }
                else {
                    MessageBox(hDlg, L"创建失败！", L"提示消息", MB_OK|MB_ICONERROR);
                }
                if (szTaskXML)
                    free(szTaskXML);
                szTaskXML = NULL;
                return (INT_PTR)TRUE;
            }
            
            szIPAddress = (PWCHAR)malloc(sizeof(WCHAR) * MAX_PROFILE_LEN);
            szUsername = (PWCHAR)malloc(sizeof(WCHAR) * MAX_PROFILE_LEN);
            szPassword = (PWCHAR)malloc(sizeof(WCHAR) * MAX_PROFILE_LEN);
            szDomain = (PWCHAR)malloc(sizeof(WCHAR) * MAX_PROFILE_LEN);
            GetWindowText(hIPAddressHWD, szIPAddress, MAX_PROFILE_LEN -1);
            GetWindowText(hUsernameHWD, szUsername, MAX_PROFILE_LEN -1);
            GetWindowText(hPasswordHWD, szPassword, MAX_PROFILE_LEN -1);
            GetWindowText(hDomainHWD, szDomain, MAX_PROFILE_LEN -1);
            
            if (RegisterNewTask(szUsername, szPassword, szDomain, szTaskXML, szIPAddress, FALSE, bJustRunTask)) {
                MessageBox(hDlg, L"创建成功！", L"提示消息", MB_OK | MB_ICONINFORMATION);
            }
            else {
                MessageBox(hDlg, L"创建失败！", L"提示消息", MB_OK | MB_ICONERROR);
            }
            if (szTaskXML)
                free(szTaskXML);
            if (szUsername)
                free(szUsername);
            if (szPassword)
                free(szPassword);
            if (szIPAddress)
                free(szIPAddress);
            szTaskXML = NULL;
            szUsername = NULL;
            szPassword = NULL;
            szIPAddress = NULL;
            return (INT_PTR)TRUE;
        }
        if (LOWORD(wParam) == IDC_CHECK) {
            
            // 本地执行
            if (IsDlgButtonChecked(hDlg, IDC_CHECK) == BST_CHECKED){
                // 禁止输入
                EnableWindow(hUsernameHWD, FALSE);
                EnableWindow(hPasswordHWD, FALSE);
                EnableWindow(hIPAddressHWD, FALSE);
                EnableWindow(hDomainHWD, FALSE);
            }
            else {
                EnableWindow(hUsernameHWD, TRUE);
                EnableWindow(hPasswordHWD, TRUE);
                EnableWindow(hIPAddressHWD, TRUE);
                EnableWindow(hDomainHWD, TRUE);
            }
        }
        break;
    }
    return (INT_PTR)FALSE;
}
