#pragma warning(disable:4996)
#include<iostream>
#include<math.h>
#include"CPoint.h"
using namespace std;

CPoint::CPoint(int zX, int zY) //���캯��
{
	mX = zX;
	mY = zY;
}

CPoint::~CPoint() //��������
{

}


void CPoint::SetPoint(int zX, int zY) //���ò�������
{
	mX = zX;
	mY = zY;
}

int CPoint::GetX() const //��ȡ��ǰ�����x
{
	return mX;
}

int CPoint::GetY() const //��ȡ��ǰ�����y
{
	return mY;
}

double CPoint::Distance(const CPoint& zP) const //������������
{
	double dis = sqrt(pow(mX - zP.mX, 2) + pow(mY - zP.mY, 2));
	return dis;
}