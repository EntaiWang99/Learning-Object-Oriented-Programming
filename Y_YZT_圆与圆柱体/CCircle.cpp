#include<iostream>
#include <math.h> 
#include"CCircle.h"
using namespace std;

//���캯��
CCircle::CCircle(int zR)
{
	mR = zR;
}

//��������
CCircle::~CCircle()
{

}

//����R
void CCircle::SetValue(int zR)
{
	mR = zR;
}

//��ʾR
void CCircle::ShowValue() const
{
	cout << "R = " << mR << endl;
}

//�������
void CCircle::Area()
{
	mS = 3.1415926 * mR * mR;
	cout << "S = " << mS << endl;
}