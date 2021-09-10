#include<iostream>
#include <math.h> 
#include"CCircle.h"
#include "CCylinder.h"

using namespace std;

//���캯��
CCylinder::CCylinder(int zR, int zH) //ȱʡֻ��������д
	:CCircle(zR)  //ֻ�ڹ��캯����׺�����࣬��Ա�����в��ã�
{
	mR = zR;
	mH = zH;
}

//��������
CCylinder::~CCylinder()
{

}

//����R,h
void CCylinder::SetValue(int zR, int zH)
{
	mR = zR;
	mH = zH;
}

//��ʾR,h
void CCylinder::ShowValue() const
{
	cout << "R = " << mR << ", H = " << mH << endl;
}


//�������
void CCylinder::Volume()
{
	mV = 3.1415926 * mR * mR * mH;
	cout << "V = " << mV << endl;
}