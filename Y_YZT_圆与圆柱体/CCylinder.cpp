#include<iostream>
#include <math.h> 
#include"CCircle.h"
#include "CCylinder.h"

using namespace std;

//构造函数
CCylinder::CCylinder(int zR, int zH) //缺省只在声明中写
	:CCircle(zR)  //只在构造函数中缀其它类，成员函数中不用？
{
	mR = zR;
	mH = zH;
}

//析构函数
CCylinder::~CCylinder()
{

}

//设置R,h
void CCylinder::SetValue(int zR, int zH)
{
	mR = zR;
	mH = zH;
}

//显示R,h
void CCylinder::ShowValue() const
{
	cout << "R = " << mR << ", H = " << mH << endl;
}


//计算体积
void CCylinder::Volume()
{
	mV = 3.1415926 * mR * mR * mH;
	cout << "V = " << mV << endl;
}