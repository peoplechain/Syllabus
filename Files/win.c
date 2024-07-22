#include <windows.h>

// Entry point for the application
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Display a message box with a simple message
    MessageBox(
        NULL,               // hWnd: Handle to the owner window (NULL if no owner)
        "Hello, World!",    // lpText: The message to be displayed
        "Message Box Title",// lpCaption: The title of the message box
        MB_OK | MB_ICONINFORMATION // uType: The buttons and icons to be included in the message box
    );

    return 0;
}
