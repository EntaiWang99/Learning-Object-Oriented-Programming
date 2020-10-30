#include<iostream>
#include"CStudent.h"
using namespace std;
/*
17251252 
Wang 
100 
100 
100 

17251251 
Tian 
100 
90 
80

*/
int main()
{
	CStudent zStudent_A, zStudent_B;
	cout << "请输入学生A的学号、姓名、成绩：" << endl;
	zStudent_A.SetStudent();

	cout << "请输入学生B的学号、姓名、成绩：" << endl;
	zStudent_B.SetStudent();

	zStudent_A.ShowStudent();
	zStudent_B.ShowStudent();

	//zStudent_A.CompareScore(zStudent_B);
	CompareScoreFriend(zStudent_A, zStudent_B);

	return 0;
}