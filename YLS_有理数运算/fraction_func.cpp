#include<iostream>
#include <math.h> 
#include"CFraction.h"
using namespace std;

CFraction::CFraction(int zN, int zD) 
{
	mN = zN;
	mD = zD;
}

CFraction::~CFraction()
{

}

//赋值
CFraction& CFraction::operator =(const CFraction& zF) //赋值用引用
{
	mN = zF.mN;
	mD = zF.mD;
	return *this;
}

//加
CFraction CFraction::operator+(const CFraction& zF) const //成员运算符
{
	CFraction zSum;
	zSum.mN = mN * zF.mD + mD * zF.mN;
	zSum.mD = mD * zF.mD;
	return zSum;
}

//减
CFraction CFraction::operator-(const CFraction& zF) const 
{
	CFraction zDiff;
	zDiff.mN = mN * zF.mD - mD * zF.mN;
	zDiff.mD = mD * zF.mD;
	return zDiff;
}

//乘
CFraction CFraction::operator*(const CFraction& zF) const
{
	CFraction zProduct;
	zProduct.mN = mN * zF.mN;
	zProduct.mD = mD * zF.mD;
	return zProduct;
}

//除
CFraction CFraction:: operator/(const CFraction& zF) const
{
	CFraction zQuotient;
	zQuotient.mN = mN * zF.mD;
	zQuotient.mD = mD * zF.mN;
	return zQuotient;
}


ostream& operator<<(ostream& zOut, const CFraction& zF) //输入输出流
{
	//约分
	int mN_temp = zF.mN;
	int mD_temp = zF.mD;
	for (int i = 2; i <= mN_temp; i++)
		if (mN_temp % i == 0 && mD_temp % i == 0)
		{
			mN_temp = mN_temp / i;
			mD_temp = mD_temp / i;
			i--;
		}
	
	zOut << mN_temp << "/" << mD_temp;
	return zOut;
}

istream& operator>>(istream& zIn, CFraction& zF)
{
	cout << "分子：";
	zIn >> zF.mN; 
	cout << "分母：";
	zIn >> zF.mD;
	return zIn;
	// “>>”重载只在主函数中，这里>>含义不变？这里的都是原始定义的
	//如何重载出“.../...”输入方式，不用单独输分子分母？单独输分子分母吧
}