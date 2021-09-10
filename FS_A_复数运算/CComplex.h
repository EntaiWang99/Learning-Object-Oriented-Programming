#include<iostream>
using namespace std;

#ifndef CCOMPLEX_H
#define CCOMPLEX_H
class CComplex {
	double mR; //ʵ��
	double mI; //�鲿
public:
	CComplex(double zR = 0, double zI = 0); //���캯��
	~CComplex(); //��������

	void SetValue();
	void SetValue(double zR, double zI); 
	void ShowValue();
	
	CComplex Add(const CComplex& zC) const;
	CComplex Substract(const CComplex& zC) const;
	CComplex Multiply(const CComplex& zC) const;
	CComplex Divide(const CComplex& zC) const;

	//��Ԫ
	friend CComplex Add_2(const CComplex& zC1, const CComplex& zC2);
	friend CComplex Substract_2(const CComplex& zC1, const CComplex& zC2);
	friend CComplex Multiply_2(const CComplex& zC1, const CComplex& zC2);
	friend CComplex Divide_2(const CComplex& zC1, const CComplex& zC2);

	//���������
	CComplex& operator =(const CComplex&); //��ֵ������
	CComplex operator+(const CComplex&) const; //��Ա�����
	CComplex operator-(const CComplex&) const;

	friend CComplex operator*(const CComplex&, const CComplex&); //��Ԫ�����
	friend CComplex operator/(const CComplex&, const CComplex&); 

	friend ostream& operator<<(ostream&, const CComplex&);
	friend istream& operator>>(istream&, const CComplex&); //���������
	// IOΪʲôһ������Ԫ�����������ǳ�Ա��IO���Ѿ�����õ�ȫ�ֺ���
};
#endif 

