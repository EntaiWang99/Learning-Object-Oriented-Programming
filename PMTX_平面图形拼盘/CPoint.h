#include<iostream>
using namespace std;

#ifndef CPOINT_H
#define CPOINT_H
class CPoint {
protected:
	int mX;
	int mY;
public:
	//���캯��
	CPoint(int zX = 0, int zY = 0);

	//��������
	~CPoint();

	//��������
	void SetValue(int zX, int zY);

	//��ʾ����
	void ShowValue() const;
};
#endif 

