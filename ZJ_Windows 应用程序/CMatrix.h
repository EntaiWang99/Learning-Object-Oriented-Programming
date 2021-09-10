#include<iostream>
using namespace std;

#ifndef CMATRIX_H
#define CMATRIX_H
class CMatrix {
	int row_dim;
	int col_dim;
	int** p_matrix;

public:
	//���캯��
	CMatrix(int zRow = 0, int zCol = 0);

	//��������
	~CMatrix();

	//�������캯��
	CMatrix(const CMatrix& zM);

	//���������ʵ������
	CMatrix& operator =(const CMatrix&); //��ֵ������
	CMatrix operator+(const CMatrix&) const; 
	CMatrix operator-(const CMatrix&) const;
	CMatrix operator*(const CMatrix&) const;
	

	//�������������
	friend ostream& operator<<(ostream&, const CMatrix&);
	friend istream& operator>>(istream&, CMatrix&);

};

#endif 