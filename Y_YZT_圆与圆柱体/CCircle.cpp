#include<iostream>
#include <math.h> 
#include"CCircle.h"
using namespace std;

//构造函数
CCircle::CCircle(int zR)
{
	mR = zR;
}

//析构函数
CCircle::~CCircle()
{

}

//设置R
void CCircle::SetValue(int zR)
{
	mR = zR;
}

//显示R
void CCircle::ShowValue() const
{
	cout << "R = " << mR << endl;
}

//面积计算
void CCircle::Area()
{
	mS = 3.1415926 * mR * mR;
	cout << "S = " << mS << endl;
}