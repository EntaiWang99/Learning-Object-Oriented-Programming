#include<iostream>
#include <math.h> 
#include"CPoint.h"
#include"CFigure.h"
#include"CCircle.h"
using namespace std;

// ���ຯ��
CPoint::CPoint(int zX, int zY)
{
	mX = zX;
	mY = zY;
}
CPoint::~CPoint()
{

}
void CPoint::SetValue(int zX, int zY)
{
	mX = zX;
	mY = zY;
}
void CPoint::ShowValue() const
{
	cout << "�������꣺(" << mX << "," << mY << ")" << endl;
}


// ƽ��ͼ���ຯ��
CFigure::CFigure(int zX, int zY)
	:CPoint(zX, zY) 
{
	mX = zX;
	mY = zY;
	mC = 0;
	mS = 0;
}
CFigure::~CFigure()
{

}
void CFigure::SetValue(int zX, int zY)
{
	mX = zX;
	mY = zY;
}
void CFigure::ShowValue() const
{
	cout << "�������꣺(" << mX << "," << mY << ")" << endl;
	cout << "�ܳ� = " << mC << endl;
	cout << "��� = " << mS << endl;
}
double CFigure::Circumference()
{
	cout << "�������麯����" << endl;
	mC = 0;
	return mC;
}
double CFigure::Area()
{
	cout << "�������麯����" << endl;
	mS = 0;
	return mS;
}

//Բ�ຯ��
CCircle::CCircle(int zX, int zY, int zR)
	:CFigure(zX, zY)
{
	mX = zX;
	mY = zY;
	mR = zR;
	mC = 0;
	mS = 0;
}
CCircle::~CCircle()
{

}
void CCircle::SetValue(int zX, int zY, int zR)
{
	mX = zX;
	mY = zY;
	mR = zR;
}
void CCircle::ShowValue() const
{
	cout << "Բ�����꣺(" << mX << "," << mY << ")" << endl;
	cout << "Բ�İ뾶 = " << mR << endl;
	cout << "Բ���ܳ� = " << mC << endl;
	cout << "Բ����� = " << mS << endl;
}
double CCircle::Circumference()
{
	mC = 2 * 3.1415926 * mR;
	return mC;
}
double CCircle::Area()
{
	mS = 3.1415926 * mR * mR;
	return mS;
}