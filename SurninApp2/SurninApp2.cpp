#include <windows.h>
#include <stdio.h>
#include <iostream>
using namespace std;

typedef int(*TEST)();
int main()
{
	std::cout << ("Test after merge");
	HINSTANCE hDll = LoadLibrary(L"SurninDynDLL");
	if (hDll == NULL)
	{
		std::cout<<("Could not open file");
		system("pause");
		return 1;
	}
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


