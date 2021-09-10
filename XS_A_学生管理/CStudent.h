#include<iostream>
using namespace std;

#ifndef CSTUDENT_H
#define CSTUDENT_H
class CStudent {
	char mNo[9]; //学号
	int gNo;
	char *mpName; //姓名
	int mScore[3]; //五门功课成绩
	int sumScore;  //总成绩
	static int ID;
public:
	CStudent(); //构造函数
	CStudent(const CStudent& zS); //拷贝构造函数
	~CStudent();

	void SetStudent();  //姓名成绩设置操作函数
	void ShowStudent() const; //对象显示

	int CompareScore(const CStudent& zS) const;
	int CompareScore(const CStudent* pS) const;
	
	friend void CompareScoreFriend(const CStudent& zS1, const CStudent& zS2);
};
#endif // !CSTUDENT_H
