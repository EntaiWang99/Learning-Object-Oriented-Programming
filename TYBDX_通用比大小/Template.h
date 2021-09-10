#include<iostream>
using namespace std;

#ifndef TEMPLATE_H
#define TEMPLATE_H

// ������
class CComplex {
	double mR; //ʵ��
	double mI; //�鲿
public:
	CComplex(double zR = 0, double zI = 0); //���캯��
	~CComplex(); //��������

	void SetValue();
	void SetValue(double zR, double zI);
	void ShowValue();

	friend bool operator>(const CComplex&, const CComplex&); //�Ƚ������

	friend ostream& operator<<(ostream&, const CComplex&); //���������
	friend istream& operator>>(istream&, const CComplex&); 
};

// �ȽϺ���ģ��
template<class T>
void Compare(T x, T y)
{
	cout << "(����ģ��)";
	if (x > y) {
		cout << x << " > " << y << endl;
	}
	else {
		cout << x << " < " << y << endl;
	}
}

#endif 
