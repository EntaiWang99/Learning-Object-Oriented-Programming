#include<iostream>
using namespace std;

#ifndef TEMPLATE_H
#define TEMPLATE_H

// 复数类
class CComplex {
	double mR; //实部
	double mI; //虚部
public:
	CComplex(double zR = 0, double zI = 0); //构造函数
	~CComplex(); //析构函数

	void SetValue();
	void SetValue(double zR, double zI);
	void ShowValue();

	friend bool operator>(const CComplex&, const CComplex&); //比较运算符

	friend ostream& operator<<(ostream&, const CComplex&); //输入输出流
	friend istream& operator>>(istream&, const CComplex&); 
};

// 比较函数模板
template<class T>
void Compare(T x, T y)
{
	cout << "(函数模板)";
	if (x > y) {
		cout << x << " > " << y << endl;
	}
	else {
		cout << x << " < " << y << endl;
	}
}

#endif 
