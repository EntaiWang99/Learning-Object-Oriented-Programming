#include<iostream>
using namespace std;

#ifndef CPOINT_H
#define CPOINT_H
class CPoint {
protected:
	int mX;
	int mY;
public:
	//构造函数
	CPoint(int zX = 0, int zY = 0);

	//析构函数
	~CPoint();

	//设置坐标
	void SetValue(int zX, int zY);

	//显示坐标
	void ShowValue() const;
};
#endif 

