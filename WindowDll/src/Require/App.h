case WM_CREATE:
    textfield = CreateWindow("STATIC", "Hello, World", 
        WS_VISIBLE | WS_CHILD, 
        20, 20, 300, 25, hwnd,
        NULL, NULL, NULL
    );
    button = CreateWindow("BUTTON", "Copas", 
        WS_CHILD | WS_BORDER | WS_VISIBLE, 
        30 30, 350, 40, hwnd,
        NULL, NULL, NULL
    );
    break;
case WM_CLOSE:
    DestroyWindow(hwnd);
    break;
case WM_DESTROY:
    PostQuitMessage(0);
    break;
default:
    return DefWindowProc(hwnd, msg, wParam, lParam);