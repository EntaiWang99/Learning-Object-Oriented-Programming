#pragma warning(disable:4996)
#include"CPoint.h"
#include"CTriangle.h"
using namespace std;

int main() {
	CPoint zP1, zP2, zP3;
	int x, y;
	cout << "请输入第一点坐标：";
	cin >> x >> y;
	zP1.SetPoint(x, y);

	cout << "请输入第二点坐标：";
	cin >> x >> y;
	zP2.SetPoint(x, y);

	cout << "请输入第三点坐标：";
	cin >> x >> y;
	zP3.SetPoint(x, y);

	CTriangle zT;
	zT.SetTriangle(zP1, zP2, zP3);
	zT.ShowTriangle();
	cout << "Area = " << zT.Area() << endl;

	system("pause");
	return 1;
}