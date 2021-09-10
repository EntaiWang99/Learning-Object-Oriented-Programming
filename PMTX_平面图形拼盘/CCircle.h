#include<iostream>
#include"CPoint.h"
#include"CFigure.h"
using namespace std;

#ifndef CCIRCLE_H
#define CCIRCLE_H
class CCircle :public CFigure
{
	int mR;
public:
	//���캯��(������Ѿ���������)
	CCircle(int mX = 0, int mY = 0, int zR = 0);

	//��������
	~CCircle();

	//���ö��㡢�뾶
	void SetValue(int zX, int zY, int zR);

	//��ʾ
	void ShowValue() const;

	//�ܳ�����
	double Circumference();

	//�������
	double Area();
};

#endif 
