#include<iostream>
using namespace std;

#ifndef CCIRCLE_H
#define CCIRCLE_H
class CCircle {
protected:
	int mR; //�뾶
	float mS; //���
public:
	//���캯��
	CCircle(int zR = 0);

	//��������
	~CCircle();

	//����R
	void SetValue(int zR);

	//��ʾR
	void ShowValue() const;

	//�������
	void Area();
};
#endif 