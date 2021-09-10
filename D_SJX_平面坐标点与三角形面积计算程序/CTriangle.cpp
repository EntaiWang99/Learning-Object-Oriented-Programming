#pragma warning(disable:4996)
#include<iostream>
#include<math.h>
#include"CTriangle.h"
#include"CPoint.h"
using namespace std;

/* ����Ҫ�����ģ�
CTriangle::CTriangle(const CPoint& zP1, const CPoint& zP2, const CPoint& zP3)
	      :CPoint(int zX, int zY)

*/		

CTriangle::CTriangle(const CPoint& zP1, const CPoint& zP2, const CPoint& zP3)
{
	mVertex[0] = zP1;
	mVertex[1] = zP2;
	mVertex[2] = zP3;
}

CTriangle::~CTriangle() //��������
{

}

void CTriangle::SetTriangle(const CPoint& zP1, const CPoint& zP2, const CPoint& zP3) //���ò�������������zP�������������еĲ���
{
	mVertex[0] = zP1;
	mVertex[1] = zP2;
	mVertex[2] = zP3;
}

void CTriangle::ShowTriangle() //���������
{
	for (int i = 0; i < 3; i++) {
		cout << "Vertex " << i + 1 << ": " << mVertex[i].GetX() << " " << mVertex[i].GetY() << endl;
	}
}

double CTriangle::Area() const //�������
{
	double l_0_1 = mVertex[0].Distance(mVertex[1]);
	double a = l_0_1;
	double l_0_2 = mVertex[0].Distance(mVertex[2]);
	double b = l_0_2;
	double l_1_2 = mVertex[1].Distance(mVertex[2]);
	double c = l_1_2;

	double p = (a + b + c) / 2;
	double area = sqrt(p * (p - a) * (p - b) * (p - c));
	return area;
}