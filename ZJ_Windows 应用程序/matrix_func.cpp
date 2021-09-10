#include<iostream>
#include <math.h> 
#include"CMatrix.h"
using namespace std;

//���캯��
CMatrix::CMatrix(int zRow, int zCol)
{
	row_dim = zRow;
	col_dim = zCol;
	p_matrix = NULL;
}

//��������
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

//�������캯��(���ܴ�ָ�룬ֻ��һ�������ƣ�������������ء�=�����)
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

//��ֵ
CMatrix& CMatrix::operator =(const CMatrix& zM)
{
	row_dim = zM.row_dim;
	col_dim = zM.col_dim;
	//p_matrix = zM.p_matrix; 
	//�����������黹��ָ��? ��Ҫ����newһ������������ܴ�ָ�룬ֻ�ܸ���
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

//��
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
		//����new�ľ�������delete��return zSum������

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
	//������return���У���Ҫд�������캯���ſ����������أ�Yes��
}

//��
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

//��
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
	cout << "���������������";
	zIn >> zM.row_dim;
	cout << "���������������";
	zIn >> zM.col_dim;

	zM.p_matrix= new int* [zM.row_dim];		
	//����new������delete�����캯������istream�У�
	for (int j = 0; j < zM.row_dim; j++) {
		zM.p_matrix[j] = new int[zM.col_dim];
	}

	cout << "�����������������";
	for (int i = 0; i < zM.row_dim; i++) {
		for (int j = 0; j < zM.col_dim; j++){
			cin >> zM.p_matrix[i][j];
		}
	}
	return zIn;
}