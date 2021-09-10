#include<iostream>
#include <math.h> 
#include"CPoint.h"
#include"CFigure.h"
#include"CCircle.h"
using namespace std;

// 点类函数
CPoint::CPoint(int zX, int zY)
{
	mX = zX;
	mY = zY;
}
CPoint::~CPoint()
{

}
void CPoint::SetValue(int zX, int zY)
{
	mX = zX;
	mY = zY;
}
void CPoint::ShowValue() const
{
	cout << "顶点坐标：(" << mX << "," << mY << ")" << endl;
}


// 平面图形类函数
CFigure::CFigure(int zX, int zY)
	:CPoint(zX, zY) 
{
	mX = zX;
	mY = zY;
	mC = 0;
	mS = 0;
}
CFigure::~CFigure()
{

}
void CFigure::SetValue(int zX, int zY)
{
	mX = zX;
	mY = zY;
}
void CFigure::ShowValue() const
{
	cout << "顶点坐标：(" << mX << "," << mY << ")" << endl;
	cout << "周长 = " << mC << endl;
	cout << "面积 = " << mS << endl;
}
double CFigure::Circumference()
{
	cout << "这里是虚函数！" << endl;
	mC = 0;
	return mC;
}
double CFigure::Area()
{
	cout << "这里是虚函数！" << endl;
	mS = 0;
	return mS;
}

//圆类函数
CCircle::CCircle(int zX, int zY, int zR)
	:CFigure(zX, zY)
{
	mX = zX;
	mY = zY;
	mR = zR;
	mC = 0;
	mS = 0;
}
CCircle::~CCircle()
{

}
void CCircle::SetValue(int zX, int zY, int zR)
{
	mX = zX;
	mY = zY;
	mR = zR;
}
void CCircle::ShowValue() const
{
	cout << "圆心坐标：(" << mX << "," << mY << ")" << endl;
	cout << "圆的半径 = " << mR << endl;
	cout << "圆的周长 = " << mC << endl;
	cout << "圆的面积 = " << mS << endl;
}
double CCircle::Circumference()
{
	mC = 2 * 3.1415926 * mR;
	return mC;
}
double CCircle::Area()
{
	mS = 3.1415926 * mR * mR;
	return mS;
}