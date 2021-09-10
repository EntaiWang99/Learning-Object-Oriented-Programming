#include<iostream>
#include"CPoint.h"
#include"CFigure.h"
using namespace std;

#ifndef CCIRCLE_H
#define CCIRCLE_H
class CCircle :public CFigure
{
	int mR;
public:
	//构造函数(基类的已经构造完了)
	CCircle(int mX = 0, int mY = 0, int zR = 0);

	//析构函数
	~CCircle();

	//设置顶点、半径
	void SetValue(int zX, int zY, int zR);

	//显示
	void ShowValue() const;

	//周长计算
	double Circumference();

	//面积计算
	double Area();
};

#endif 
