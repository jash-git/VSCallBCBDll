// VCCallBCBDll.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>

using namespace std;
extern "C" __declspec(dllexport) int BCBType_Count(int m, int n);
void Pause()
{
	printf("Press Enter key to continue...");
	fgetc(stdin);
}
int main()
{
	cout << "Hello world!" << endl;
	cout << "1+2+3....+100=" << BCBType_Count(0, 100) << endl;
	Pause();
	return 0;
}

