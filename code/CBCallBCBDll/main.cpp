#include <iostream>
#include <stdio.h>
using namespace std;

//---
//ぃㄏノLIB笆篈更DLLㄧ计
//http://www.infernodevelopment.com/simple-c-dll-loading-message-box
#include<windows.h>
typedef  int (*FuncPtr)(int m,int n);
//---ぃㄏノLIB笆篈更DLLㄧ计

void Pause()
{
    printf("Press Enter key to continue...");
    fgetc(stdin);
}
int main()
{
    FuncPtr myDllFunc;
    BOOL linkSuccessFlag = FALSE, fFreeResult;
    HINSTANCE hinstLib = LoadLibrary("BCB_DLL.dll");

    if (hinstLib != NULL)
    {
        myDllFunc = (FuncPtr) GetProcAddress(hinstLib, "_BCBType_Count");

        if (myDllFunc != NULL)
        {
            cout << "1+2+3+...+100=" << myDllFunc(1,100) <<endl;
        }
        fFreeResult = FreeLibrary(hinstLib);
    }
    else
    {
        cout << "Hello world!" << endl;
    }


    Pause();
    return 0;
}
