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

//��ֵ
CFraction& CFraction::operator =(const CFraction& zF) //��ֵ������
{
	mN = zF.mN;
	mD = zF.mD;
	return *this;
}

//��
CFraction CFraction::operator+(const CFraction& zF) const //��Ա�����
{
	CFraction zSum;
	zSum.mN = mN * zF.mD + mD * zF.mN;
	zSum.mD = mD * zF.mD;
	return zSum;
}

//��
CFraction CFraction::operator-(const CFraction& zF) const 
{
	CFraction zDiff;
	zDiff.mN = mN * zF.mD - mD * zF.mN;
	zDiff.mD = mD * zF.mD;
	return zDiff;
}

//��
CFraction CFraction::operator*(const CFraction& zF) const
{
	CFraction zProduct;
	zProduct.mN = mN * zF.mN;
	zProduct.mD = mD * zF.mD;
	return zProduct;
}

//��
CFraction CFraction:: operator/(const CFraction& zF) const
{
	CFraction zQuotient;
	zQuotient.mN = mN * zF.mD;
	zQuotient.mD = mD * zF.mN;
	return zQuotient;
}


ostream& operator<<(ostream& zOut, const CFraction& zF) //���������
{
	//Լ��
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
	cout << "���ӣ�";
	zIn >> zF.mN; 
	cout << "��ĸ��";
	zIn >> zF.mD;
	return zIn;
	// ��>>������ֻ���������У�����>>���岻�䣿����Ķ���ԭʼ�����
	//������س���.../...�����뷽ʽ�����õ�������ӷ�ĸ����������ӷ�ĸ��
}