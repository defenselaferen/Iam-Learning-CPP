#ifndef __Window
#define __Window

const char g_szClassName[] = "myWindowClass";

HWND textfield, button;

// Step 4: the Window Procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch(msg)
    {
        #include "App.h"
    }
    return 0;
}

#endif