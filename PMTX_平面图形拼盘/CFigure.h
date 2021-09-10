#include<iostream>
#include"CPoint.h"
using namespace std;

#ifndef CFIGURE_H
#define CFIGURE_H
class CFigure :public CPoint
{
protected:
	double mC; //周长
	double mS; //面积
public:
	//构造函数
	CFigure(int zX, int zY);

	//析构函数
	~CFigure();

	//设置顶点
	void SetValue(int zX, int zY);

	//显示顶点
	//virtual void ShowValue() const;
	void ShowValue() const;

	//周长计算
	//virtual double Circumference();
	double Circumference();

	//面积计算
	//virtual double Area();
	double Area();
	//不加虚函数好像也没啥问题吧？？
	//只有在有冲突的时候才会体现虚函数的作用？
};
#endif 

