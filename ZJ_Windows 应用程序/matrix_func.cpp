#include<iostream>
#include <math.h> 
#include"CMatrix.h"
using namespace std;

//构造函数
CMatrix::CMatrix(int zRow, int zCol)
{
	row_dim = zRow;
	col_dim = zCol;
	p_matrix = NULL;
}

//析构函数
CMatrix::~CMatrix()
{
	if (p_matrix != NULL) {
		for (int i = 0; i < row_dim; i++) {
			delete[] p_matrix[i];
		}
		delete[]p_matrix;
	}
	p_matrix = NULL;
}

//拷贝构造函数(不能传指针，只能一个个复制，拷贝构造和重载“=”差不多)
CMatrix::CMatrix(const CMatrix& zM) {
	row_dim = zM.row_dim;
	col_dim = zM.col_dim;
	if (p_matrix != NULL) {
		p_matrix = new int* [row_dim];
		for (int j = 0; j < row_dim; j++) {
			p_matrix[j] = new int[col_dim];
		}
		for (int i = 0; i < zM.row_dim; i++) {
			for (int j = 0; j < zM.col_dim; j++) {
				p_matrix[i][j] = zM.p_matrix[i][j];
			}
		}
	}
}

//赋值
CMatrix& CMatrix::operator =(const CMatrix& zM)
{
	row_dim = zM.row_dim;
	col_dim = zM.col_dim;
	//p_matrix = zM.p_matrix; 
	//复制整个数组还是指针? 需要重新new一个？深拷贝？不能传指针，只能复制
	if (p_matrix != NULL) {
		p_matrix = new int* [row_dim];
		for (int j = 0; j < row_dim; j++) {
			p_matrix[j] = new int[col_dim];
		}
		for (int i = 0; i < zM.row_dim; i++) {
			for (int j = 0; j < zM.col_dim; j++) {
				p_matrix[i][j] = zM.p_matrix[i][j];
			}
		}
	}
	return *this;
}

//加
CMatrix CMatrix::operator+(const CMatrix& zM) const
{
	CMatrix zSum;
	if ((row_dim == zM.row_dim) && (col_dim == zM.col_dim))
	{
		zSum.row_dim = row_dim;
		zSum.col_dim = col_dim;
		zSum.p_matrix = new int* [zSum.row_dim];
		for (int j = 0; j < zSum.row_dim; j++) {
			zSum.p_matrix[j] = new int[zSum.col_dim];
		}	
		//这里new的矩阵哪里delete：return zSum后析构

		for (int i = 0; i < row_dim; i++) {
			for (int j = 0; j < col_dim; j++) {
				zSum.p_matrix[i][j] = zM.p_matrix[i][j] + p_matrix[i][j];
			}
		}
	}
	else
	{
		cout << "Dimension Error!" << endl;
	}
	return zSum;
	//这样简单return不行？需要写拷贝构造函数才可以正常返回？Yes！
}

//减
CMatrix CMatrix::operator-(const CMatrix& zM) const
{
	CMatrix zDiff;
	if ((row_dim == zM.row_dim) && (col_dim == zM.col_dim))
	{
		zDiff.row_dim = row_dim;
		zDiff.col_dim = col_dim;
		zDiff.p_matrix = new int* [zDiff.row_dim];
		for (int j = 0; j < zDiff.row_dim; j++) {
			zDiff.p_matrix[j] = new int[zDiff.col_dim];
		}

		for (int i = 0; i < row_dim; i++) {
			for (int j = 0; j < col_dim; j++) {
				zDiff.p_matrix[i][j] = p_matrix[i][j] - zM.p_matrix[i][j];
			}
		}
	}
	else
	{
		cout << "Dimension Error!" << endl;
	}
	return zDiff;
}

//乘
CMatrix CMatrix::operator*(const CMatrix& zM) const
{
	CMatrix zProduct;
	if (row_dim == zM.col_dim)
	{
		zProduct.row_dim = row_dim;
		zProduct.col_dim = zM.col_dim;
		zProduct.p_matrix = new int* [zProduct.row_dim];
		for (int j = 0; j < zProduct.row_dim; j++) {
			zProduct.p_matrix[j] = new int[zProduct.col_dim];
		}
		

		for (int i = 0; i < row_dim; i++) {
			for (int j = 0; j < zM.col_dim; j++) {
				int temp = 0;
				for (int k = 0; k < col_dim; k++) {
					temp += p_matrix[i][k] * zM.p_matrix[k][j];
				}
				zProduct.p_matrix[i][j] = temp;
			}
		}
	}
	else
	{
		cout << "Dimension Error!" << endl;
	}
	return zProduct;
}

ostream& operator<<(ostream& zOut, const CMatrix& zM)
{
	for (int i = 0; i < zM.row_dim; i++) {
		for (int j = 0; j < zM.col_dim; j++) {
			zOut << zM.p_matrix[i][j] << " ";
		}
		cout << "\n";
	}
	return zOut;
}

istream& operator>>(istream& zIn, CMatrix& zM)
{
	cout << "请输入矩阵行数：";
	zIn >> zM.row_dim;
	cout << "请输入矩阵列数：";
	zIn >> zM.col_dim;

	zM.p_matrix= new int* [zM.row_dim];		
	//哪里new？哪里delete？构造函数还是istream中？
	for (int j = 0; j < zM.row_dim; j++) {
		zM.p_matrix[j] = new int[zM.col_dim];
	}

	cout << "请以行优先输入矩阵：";
	for (int i = 0; i < zM.row_dim; i++) {
		for (int j = 0; j < zM.col_dim; j++){
			cin >> zM.p_matrix[i][j];
		}
	}
	return zIn;
}