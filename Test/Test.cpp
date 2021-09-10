#include<iostream>
#include "StaticLib.h"
/*
注意：
1.只include静态链接库头文件，具体函数实现过程是看不见的，lib要放进Test工程的头文件中
2.需要两个项目，一个是生成lib，一个是使用lib，新建项目时不一样的，可参考本模板
3.生成后的。lib需要被放入main.cpp的文件夹中
*/

#pragma comment(lib,"StaticLib.lib")

int main()
{
	std::cout << "Main_begin" << std::endl;
	Display();
	std::cout << "Main_end" << std::endl;
	return 0;
}


