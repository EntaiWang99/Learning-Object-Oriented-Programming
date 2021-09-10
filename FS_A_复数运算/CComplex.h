#include<iostream>
using namespace std;

#ifndef CCOMPLEX_H
#define CCOMPLEX_H
class CComplex {
	double mR; //实部
	double mI; //虚部
public:
	CComplex(double zR = 0, double zI = 0); //构造函数
	~CComplex(); //析构函数

	void SetValue();
	void SetValue(double zR, double zI); 
	void ShowValue();
	
	CComplex Add(const CComplex& zC) const;
	CComplex Substract(const CComplex& zC) const;
	CComplex Multiply(const CComplex& zC) const;
	CComplex Divide(const CComplex& zC) const;

	//友元
	friend CComplex Add_2(const CComplex& zC1, const CComplex& zC2);
	friend CComplex Substract_2(const CComplex& zC1, const CComplex& zC2);
	friend CComplex Multiply_2(const CComplex& zC1, const CComplex& zC2);
	friend CComplex Divide_2(const CComplex& zC1, const CComplex& zC2);

	//运算符重载
	CComplex& operator =(const CComplex&); //赋值用引用
	CComplex operator+(const CComplex&) const; //成员运算符
	CComplex operator-(const CComplex&) const;

	friend CComplex operator*(const CComplex&, const CComplex&); //友元运算符
	friend CComplex operator/(const CComplex&, const CComplex&); 

	friend ostream& operator<<(ostream&, const CComplex&);
	friend istream& operator>>(istream&, const CComplex&); //输入输出流
	// IO为什么一定是友元？其它可以是成员？IO是已经定义好的全局函数
};
#endif 

