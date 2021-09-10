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

ostream& operator<<(ostream& zOut, const CComplex& zC) //���������
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

// Compareģ��ʵ��������д2�ߣ�Ҫģ����ɶ�ã�ʵ������û���У���
void Compare(const string x, const string y)
{
	cout << "(����ģ��1)";
	if (x > y) {
		cout << x << " > " << y << endl;
	}
	else {
		cout << x << " < " << y << endl;
	}
}

void Compare(const CComplex& x, const CComplex& y)
{
	cout << "(����ģ��2)";
	if (x > y) {
		cout << x << " > " << y << endl;
	}
	else {
		cout << x << " < " << y << endl;
	}
}