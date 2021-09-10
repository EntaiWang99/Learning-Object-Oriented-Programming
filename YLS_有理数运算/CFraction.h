#include<iostream>
using namespace std;

#ifndef FRACTION_H
#define FRACTION_H
class CFraction {
	int mN; //分子
	int mD; //分母
public:
	//构造函数
	CFraction(int zN = 0, int zD = 0);
 
	//析构函数
	~CFraction();

	//运算符重载实现运算(两个对象都是const?)
	CFraction& operator =(const CFraction&); //赋值用引用
	CFraction operator+(const CFraction&) const; //成员运算符
	CFraction operator-(const CFraction&) const;
	CFraction operator*(const CFraction&) const; 
	CFraction operator/(const CFraction&) const;

	//重载输入输出流
	//为什么这个建议用友元？
	friend ostream& operator<<(ostream&, const CFraction&);
	friend istream& operator>>(istream&, CFraction&);
};
#endif 