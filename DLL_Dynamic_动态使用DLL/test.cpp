#include <iostream>
#include <Windows.h>
#include "Use_DLL.h"
#include <tchar.h>

typedef void (*LPFUN)();

int main()
{
	HINSTANCE hDll;
	if ((hDll = LoadLibrary(_T("Dll.dll"))) == NULL) //加载DLL
	{
		std::cout << "Loading DLL File Error!" << std::endl;
		exit(0);
	}
	
	LPFUN lpFun; //这个lpFun对应Display这个入口函数
	if ((lpFun = (LPFUN)GetProcAddress(hDll, "Display")) == NULL) //获取DLL入口
	{
		std::cout << "Loading DLL Entrance Address Error!" << std::endl;
		exit(0);
	}

	std::cout << "Main_begin" << std::endl;
	lpFun();
	std::cout << "Main_end" << std::endl;

	return 666;

}

