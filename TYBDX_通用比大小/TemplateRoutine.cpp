#include<iostream>
#include<math.h> 
#include"Template.h"
using namespace std;

CComplex::CComplex(double zR, double zI) {
	mR = zR;
	mI = zI;
}

CComplex::~CComplex() {
}

void CComplex::SetValue() {
}

void CComplex::SetValue(double zR, double zI) {
	mR = zR;
	mI = zI;
}



bool operator>(const CComplex& zC1, const CComplex& zC2)
{
	bool flag = true;
	double zC1_mod, zC2_mod;
	zC1_mod = sqrt(pow(zC1.mI, 2) + pow(zC1.mR, 2));
	zC2_mod = sqrt(pow(zC2.mI, 2) + pow(zC2.mR, 2));
	if (zC1_mod < zC2_mod)
		flag = false;
	return flag;
}

ostream& operator<<(ostream& zOut, const CComplex& zC) //输入输出流
{
	zOut << zC.mR << "+" << zC.mI << "i";
	return zOut;
}

istream& operator>>(istream& zIn, const CComplex& zC)
{
	zIn >> zC.mR; 
	zIn >> zC.mI;
	return zIn;
}

// Compare模板实例化（重写2边？要模板有啥用？实例化的没运行？）
void Compare(const string x, const string y)
{
	cout << "(重载模板1)";
	if (x > y) {
		cout << x << " > " << y << endl;
	}
	else {
		cout << x << " < " << y << endl;
	}
}

void Compare(const CComplex& x, const CComplex& y)
{
	cout << "(重载模板2)";
	if (x > y) {
		cout << x << " > " << y << endl;
	}
	else {
		cout << x << " < " << y << endl;
	}
}