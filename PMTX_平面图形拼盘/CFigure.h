#include<iostream>
#include"CPoint.h"
using namespace std;

#ifndef CFIGURE_H
#define CFIGURE_H
class CFigure :public CPoint
{
protected:
	double mC; //�ܳ�
	double mS; //���
public:
	//���캯��
	CFigure(int zX, int zY);

	//��������
	~CFigure();

	//���ö���
	void SetValue(int zX, int zY);

	//��ʾ����
	//virtual void ShowValue() const;
	void ShowValue() const;

	//�ܳ�����
	//virtual double Circumference();
	double Circumference();

	//�������
	//virtual double Area();
	double Area();
	//�����麯������Ҳûɶ����ɣ���
	//ֻ�����г�ͻ��ʱ��Ż������麯�������ã�
};
#endif 

