#include<iostream>
#include <math.h> 
#include"CPoint.h"
#include"CFigure.h"
#include"CCircle.h"
using namespace std;

int main()
{
	int zX, zY, zR;
	cout << "X = ";
	cin >> zX;
	cout << "Y = ";
	cin >> zY;
	cout << "R = ";
	cin >> zR;

	CCircle zC(zX, zY, zR);

	zC.Circumference();
	zC.Area();

	cout << "Circle: ";
	zC.ShowValue();
	cout << endl;
	return 0;
}

