#include<iostream>
using namespace std;

#ifndef CCIRCLE_H
#define CCIRCLE_H
class CCircle {
protected:
	int mR; //半径
	float mS; //面积
public:
	//构造函数
	CCircle(int zR = 0);

	//析构函数
	~CCircle();

	//设置R
	void SetValue(int zR);

	//显示R
	void ShowValue() const;

	//面积计算
	void Area();
};
#endif 