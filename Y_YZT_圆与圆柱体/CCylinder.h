#include<iostream>
using namespace std;
#include"CCircle.h" //深度依赖

#ifndef CCYLINDER_H
#define CCYLINDER_H
class CCylinder :public CCircle
{
	int mH;
	float mV;
public:
	//构造函数
	CCylinder(int mR = 0, int mH = 0);
	
	//析构函数
	~CCylinder();

	//设置R,h
	void SetValue(int zR, int zH);

	//显示R,h
	void ShowValue() const;

	//计算体积
	void Volume();
};

#endif 