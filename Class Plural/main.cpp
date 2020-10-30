#include<iostream>
#include"CComplex.h"
using namespace std;

int main()
{
	//整理好普通版、友元版、运算符重载版，不要混在一起
	
	CComplex zC1, zC2, zC_sum;

	zC1.SetValue(1, 2);
	cout << "zC1=";
	//zC1.ShowValue(); //普通版
	cout << zC1 << endl; //运算符重载

	zC2.SetValue(2, 3);
	cout << "zC2=";	
	//zC2.ShowValue();
	cout << zC2 << endl;

	//zC_sum = zC1.Add(zC2); //普通版
	//zC_sum = Add_2(zC1, zC2); //友元版
	zC_sum = zC1 + zC2; //运算符重载
	cout << "zC_sum=";
	//zC_sum.ShowValue();
	cout << zC_sum << endl;

	CComplex zC_diff;
	//zC_diff = zC1.Substract(zC2);
	//zC_diff = Substract_2(zC1, zC2);
	zC_diff = zC1 - zC2;
	cout << "zC_diff=";
	cout << zC_diff << endl;
	//zC_diff.ShowValue();

	CComplex zC_product;
	//zC_product = zC1.Multiply(zC2);
	//zC_product = Multiply_2(zC1, zC2);
	zC_product = zC1 * zC2;
	cout << "zC_product=";
	cout << zC_product << endl;
	//zC_product.ShowValue();

	CComplex zC_Quotient;
	//zC_Quotient = zC1.Divide(zC2);
	//zC_Quotient = Divide_2(zC1, zC2);
	zC_Quotient = zC1 / zC2;
	cout << "zC_Quotient=";
	cout << zC_Quotient << endl;
	//zC_Quotient.ShowValue();

	CComplex zC3(5);	
	cout << "zC3=";
	zC3.ShowValue();

	system("pause");
	return 0;
}
