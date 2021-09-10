#include<iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H
class CFraction {
	int mN; //����
	int mD; //��ĸ
public:
	//���캯��
	CFraction(int zN = 0, int zD = 0);
 
	//��������
	~CFraction();

	//���������ʵ������(����������const?)
	CFraction& operator =(const CFraction&); //��ֵ������
	CFraction operator+(const CFraction&) const; //��Ա�����
	CFraction operator-(const CFraction&) const;
	CFraction operator*(const CFraction&) const; 
	CFraction operator/(const CFraction&) const;

	//�������������
	//Ϊʲô�����������Ԫ��
	friend ostream& operator<<(ostream&, const CFraction&);
	friend istream& operator>>(istream&, CFraction&);
};
#endif 