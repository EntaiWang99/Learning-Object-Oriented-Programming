#include<iostream>
using namespace std;

#ifndef CPOINT_H
#define CPOINT_H
class CPoint {
	int mX, mY;

public:
	CPoint(int zX = 0, int zY = 0); //���캯��
	~CPoint(); //��������

	void SetPoint(int zX, int zY); //���ò�������
	int GetX() const; //��ȡ��ǰ�����x
	int GetY() const; //��ȡ��ǰ�����y
	double Distance(const CPoint& zP) const; //������������
};
#endif