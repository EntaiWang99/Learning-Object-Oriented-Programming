#include<iostream>
#include"CPoint.h"
using namespace std;

#ifndef CTRIANGLE_H
#define CTRIANGLE_H

class CTriangle {
	CPoint mVertex[3]; //三角形顶点

public:
	CTriangle(const CPoint& zP1 = CPoint(0, 0), const CPoint& zP2 = CPoint(0, 1), const CPoint& zP3 = CPoint(1, 0)); //缺省值
	~CTriangle(); //析构函数

	void SetTriangle(const CPoint& zP1, const CPoint& zP2, const CPoint& zP3); //设置操作函数，不改zP，改三角形类中的参数
	void ShowTriangle(); //输出三角形
	double Area() const; //面积计算
};
#endif
