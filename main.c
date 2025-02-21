#include <windows.h>
#include <shellapi.h>
#include <synchapi.h>

int timeforalarm = 0;

void notify(){
    NOTIFYICONDATA nid = {0};
    nid.cbSize = sizeof(NOTIFYICONDATA);
    nid.uFlags = NIF_MESSAGE | NIF_ICON | NIF_TIP;
    nid.uCallbackMessage = WM_USER + 1;
    nid.hIcon = LoadIcon(NULL, IDI_INFORMATION);
    lstrcpy(nid.szTip, TEXT("Notification"));


    Shell_NotifyIcon(NIM_ADD, &nid);

    nid.uFlags = NIF_INFO;
    lstrcpy(nid.szInfo, TEXT("New get the f*ck up that chair!"));
    lstrcpy(nid.szInfoTitle, TEXT("It's been 1 hour."));
    nid.dwInfoFlags = NIIF_INFO;

    Shell_NotifyIcon(NIM_MODIFY, &nid);
}

void execute_alarm(){
    notify();
    Sleep(1000);
    notify();
    Sleep(1000);
    notify();
    timeforalarm = 0;
}

void loop(){
    while(1){
        execute_alarm();
        Sleep(3600000);
    }
}

void hide_console(){
    HWND hConsole = GetConsoleWindow();
    ShowWindow(hConsole, SW_HIDE);
}

int main() {
    
    hide_console();

    loop();

    return 0;
}
