#pragma warning(disable:4996)
#include<iostream>
#include<math.h>
#include"CPoint.h"
using namespace std;

CPoint::CPoint(int zX, int zY) //构造函数
{
	mX = zX;
	mY = zY;
}

CPoint::~CPoint() //析构函数
{

}


void CPoint::SetPoint(int zX, int zY) //设置操作函数
{
	mX = zX;
	mY = zY;
}

int CPoint::GetX() const //获取当前对象的x
{
	return mX;
}

int CPoint::GetY() const //获取当前对象的y
{
	return mY;
}

double CPoint::Distance(const CPoint& zP) const //常量对象引用
{
	double dis = sqrt(pow(mX - zP.mX, 2) + pow(mY - zP.mY, 2));
	return dis;
}