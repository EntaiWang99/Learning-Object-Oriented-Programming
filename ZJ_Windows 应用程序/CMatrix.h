#include<iostream>
using namespace std;

#ifndef CMATRIX_H
#define CMATRIX_H
class CMatrix {
	int row_dim;
	int col_dim;
	int** p_matrix;

public:
	//构造函数
	CMatrix(int zRow = 0, int zCol = 0);

	//析构函数
	~CMatrix();

	//拷贝构造函数
	CMatrix(const CMatrix& zM);

	//运算符重载实现运算
	CMatrix& operator =(const CMatrix&); //赋值用引用
	CMatrix operator+(const CMatrix&) const; 
	CMatrix operator-(const CMatrix&) const;
	CMatrix operator*(const CMatrix&) const;
	

	//重载输入输出流
	friend ostream& operator<<(ostream&, const CMatrix&);
	friend istream& operator>>(istream&, CMatrix&);

};

#endif 