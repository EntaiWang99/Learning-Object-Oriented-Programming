#include<iostream>
using namespace std;

#ifndef CPOINT_H
#define CPOINT_H
class CPoint {
	int mX, mY;

public:
	CPoint(int zX = 0, int zY = 0); //构造函数
	~CPoint(); //析构函数

	void SetPoint(int zX, int zY); //设置操作函数
	int GetX() const; //获取当前对象的x
	int GetY() const; //获取当前对象的y
	double Distance(const CPoint& zP) const; //常量对象引用
};
#endif