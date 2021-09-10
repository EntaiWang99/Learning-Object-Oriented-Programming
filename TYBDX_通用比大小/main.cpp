#include<iostream>
#include"Template.h"
using namespace std;

int main()
{
	CComplex zC1, zC2;
	zC1.SetValue(1, 2);
	zC2.SetValue(3, 5);
	cout << "zC1 = " << zC1 << endl;
	cout << "zC2 = " << zC2 << endl;

	Compare(zC1, zC2);

	string zS1, zS2;
	zS1 = "I love you!";
	zS2 = "I hate you!";
	cout << "zS1 = " << zS1 << endl;
	cout << "zS2 = " << zS2 << endl;

	Compare(zS1, zS2);

	return 0;
}