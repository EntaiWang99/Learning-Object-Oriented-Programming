#include<iostream>
using namespace std;
#include"CCircle.h" //�������

#ifndef CCYLINDER_H
#define CCYLINDER_H
class CCylinder :public CCircle
{
	int mH;
	float mV;
public:
	//���캯��
	CCylinder(int mR = 0, int mH = 0);
	
	//��������
	~CCylinder();

	//����R,h
	void SetValue(int zR, int zH);

	//��ʾR,h
	void ShowValue() const;

	//�������
	void Volume();
};

#endif 