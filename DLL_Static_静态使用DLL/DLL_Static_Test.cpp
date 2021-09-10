#include <iostream>
#include "Use_Dll.h"
#pragma comment(lib, "Dll.lib") 
//静态链接库，.lib和.dll均要复制到.cpp目录下

int main()
{
	std::cout << "Main_begin" << std::endl;
	Display();
	std::cout << "Main_end" << std::endl;
	return 0;
}

