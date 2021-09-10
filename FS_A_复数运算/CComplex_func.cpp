#include<iostream>
#include <math.h> 
#include"CComplex.h"
using namespace std;

CComplex::CComplex(double zR, double zI) {
	/*
	mR = zR;
	mI = zI;
	cout << "<=" << mR << "+" << mI << "i" << endl;
	*/
}

CComplex::~CComplex() {
	/*
	cout << "=>" << mR << "+" << mI << "i" << endl;
	*/
}

void CComplex::SetValue() {
}

void CComplex::SetValue(double zR, double zI) {
	mR = zR;
	mI = zI;
}

void CComplex::ShowValue() {
	if (mR != 0 && mI != 0)
		cout << mR << "+" << mI << "i" << endl;
	if (mR == 0 && mI != 0)
		cout << mI << "i" << endl;
	if ((mR != 0) && (mI == 0))
		cout << mR << endl;
	if ((mR == 0) && (mI == 0))
		cout << 0 << endl;
}

CComplex CComplex::Add(const CComplex& zC) const
{
	CComplex zSum;
	zSum.mR = mR + zC.mR;
	zSum.mI = mI + zC.mI;
	return zSum;
}

CComplex CComplex::Substract(const CComplex& zC) const
{
	CComplex zDiff;
	zDiff.mR = mR - zC.mR;
	zDiff.mI = mI - zC.mI;
	return zDiff;
}

CComplex CComplex::Multiply(const CComplex& zC) const
{
	CComplex zProduct;
	zProduct.mR = mR * zC.mR - mI * zC.mI;
	zProduct.mI = mR * zC.mI + mI * zC.mR;
	return zProduct;
};

CComplex CComplex::Divide(const CComplex& zC) const
{
	CComplex zQuotient;
	zQuotient.mR = (mR * zC.mR + mI * zC.mI)/(pow(zC.mR,2)+ pow(zC.mI, 2));
	zQuotient.mI = (mI * zC.mR - mR * zC.mI) / (pow(zC.mR, 2) + pow(zC.mI, 2));
	return zQuotient;
};

//使用友元
CComplex Add_2(const CComplex& zC1, const CComplex& zC2)
{
	CComplex zSum;
	zSum.mR = zC1.mR + zC2.mR;
	zSum.mI = zC1.mI + zC2.mI;
	return zSum;
}

CComplex Substract_2(const CComplex& zC1, const CComplex& zC2)
{
	CComplex zDiff;
	zDiff.mR = zC1.mR - zC2.mR;
	zDiff.mI = zC1.mI - zC2.mI;
	return zDiff;
}

CComplex Multiply_2(const CComplex& zC1, const CComplex& zC2)
{
	CComplex zProduct;
	zProduct.mR = zC1.mR * zC2.mR - zC1.mI * zC2.mI;
	zProduct.mI = zC1.mR * zC2.mI + zC1.mI * zC2.mR;
	return zProduct;
};

CComplex Divide_2(const CComplex& zC1, const CComplex& zC2)
{
	CComplex zQuotient;
	zQuotient.mR = (zC1.mR * zC2.mR + zC1.mI * zC2.mI) / (pow(zC2.mR, 2) + pow(zC2.mI, 2));
	zQuotient.mI = (zC1.mI * zC2.mR - zC2.mR * zC2.mI) / (pow(zC2.mR, 2) + pow(zC2.mI, 2));
	return zQuotient;
};

//运算符重载
CComplex& CComplex::operator =(const CComplex& zC) //赋值用引用
{
	mR = zC.mR;
	mI = zC.mI;
	return *this;
}

CComplex CComplex::operator+(const CComplex& zC) const //成员运算符
{
	CComplex zSum;
	zSum.mR = mR + zC.mR;
	zSum.mI = mI + zC.mI;
	return zSum;
}

CComplex CComplex::operator-(const CComplex& zC) const
{
	CComplex temp;
	temp.mR = mR - zC.mR;
	temp.mI = mI - zC.mI;
	return temp;
}

CComplex operator*(const CComplex& zC1, const CComplex& zC2) //友元运算符
{
	CComplex zProduct;
	zProduct.mR = zC1.mR * zC2.mR - zC1.mI * zC2.mI;
	zProduct.mI = zC1.mR * zC2.mI + zC1.mI * zC2.mR;
	return zProduct;
}

CComplex operator/(const CComplex& zC1, const CComplex& zC2) 
{
	CComplex zQuotient;
	zQuotient.mR = (zC1.mR * zC2.mR + zC1.mI * zC2.mI) / (pow(zC2.mR, 2) + pow(zC2.mI, 2));
	zQuotient.mI = (zC1.mI * zC2.mR - zC2.mR * zC2.mI) / (pow(zC2.mR, 2) + pow(zC2.mI, 2));
	return zQuotient;
}

ostream& operator<<(ostream& zOut, const CComplex& zC) //输入输出流
{
	zOut <<  zC.mR << "+" << zC.mI << "i";
	return zOut;
}

istream& operator>>(istream& zIn, const CComplex& zC)
{
	zIn >> zC.mR; //这里“>>”的含义？对应输入流类型
	zIn >> zC.mI;
	return zIn;
}