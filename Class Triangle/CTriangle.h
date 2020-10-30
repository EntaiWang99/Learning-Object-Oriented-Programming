#include<iostream>
#include"CPoint.h"
using namespace std;

#ifndef CTRIANGLE_H
#define CTRIANGLE_H

class CTriangle {
	CPoint mVertex[3]; //�����ζ���

public:
	CTriangle(const CPoint& zP1 = CPoint(0, 0), const CPoint& zP2 = CPoint(0, 1), const CPoint& zP3 = CPoint(1, 0)); //ȱʡֵ
	~CTriangle(); //��������

	void SetTriangle(const CPoint& zP1, const CPoint& zP2, const CPoint& zP3); //���ò�������������zP�������������еĲ���
	void ShowTriangle(); //���������
	double Area() const; //�������
};
#endif
