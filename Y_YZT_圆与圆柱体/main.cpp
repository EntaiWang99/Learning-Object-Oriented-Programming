#include<iostream>
#include "CCylinder.h"

using namespace std;

int main() {
	int zR, zH;
	cout << "R = ";
	cin >> zR;
	cout << "H = ";
	cin >> zH;

	CCylinder zC(zR, zH);
	cout << "Cylinder: ";
	zC.ShowValue();
	cout << endl;

	cout << "Basal Area: ";
	zC.Area();
	cout << endl;

	cout << "Volume: ";
	zC.Volume();
	cout << endl;

	return 0;
}
