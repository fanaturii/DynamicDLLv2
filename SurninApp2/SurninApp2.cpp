#include <windows.h>
#include <stdio.h>
#include <iostream>
using namespace std;

typedef int(*TEST)();
int main()
{
	HINSTANCE hDll = LoadLibrary(L"SurninDynDLL");
	TEST pFIO = NULL;
	TEST pGroup = NULL;
	pFIO = (TEST)GetProcAddress(hDll, "FIO");
	pGroup = (TEST)GetProcAddress(hDll, "Group");
	pFIO();
	pGroup();
	FreeLibrary(hDll);
	system("pause");
	return 0;
	
}


