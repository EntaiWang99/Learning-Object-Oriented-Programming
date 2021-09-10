#pragma warning(disable:4996)
#include<iostream>
#include <math.h> 
#include"CStudent.h"
using namespace std;

int CStudent::ID = 0;

CStudent::CStudent() {  //���캯��
	mpName = NULL;
	ID++;
	gNo = ID;
}

CStudent::CStudent(const CStudent& zS) {  //�������캯��
	if (mpName != NULL) {
		mpName = new char[strlen(zS.mpName) + 1]; 
		strcpy(mpName, zS.mpName);	
	}
}

CStudent::~CStudent(){  //��������
	if (*mpName != NULL) {
		delete[] mpName;
		mpName = NULL;
	}
}

void CStudent::SetStudent() {
	mpName = new char[10]; //����new:������Ҫ�����������ڹ��캯����Ҳ�����ں���
	cin >> mNo;
	cin >> mpName; //not cin >> *mpName
	cin >> mScore[0] >> mScore[1] >> mScore[2];
	for (int i = 0; i < 3; i++) {
		sumScore += mScore[i];
	}
}

void CStudent::ShowStudent() const {
	char mNo_temp[9];
	sprintf(mNo_temp, "1728%04d", gNo);
	cout << "Student_seq_no:" << mNo_temp << " ";
	cout << "Student ID:" << mNo << "  Student Name:" << mpName << "  Score:";
	cout << mScore[0] << " " << mScore[1] << " " << mScore[2] << endl;
}

int CStudent::CompareScore(const CStudent& zS) const {
	if (sumScore>zS.sumScore) {
		cout << mpName << "��" << zS.mpName << "��ѧϰ�ɼ��ã�" << endl;
		return 1;
	}
	else {
		cout << zS.mpName << "��" << mpName << "��ѧϰ�ɼ��ã�" << endl;
		return 0;
	}
}

int CStudent::CompareScore(const CStudent* pS) const{
	if (sumScore > pS->sumScore) {
		cout << mpName << "��" << pS->mpName << "��ѧϰ�ɼ��ã�" << endl;
		return 1;
	}
	else {
		cout << pS->mpName << "��" << mpName << "��ѧϰ�ɼ��ã�" << endl;
		return 0;
	}
}

void CompareScoreFriend(const CStudent& zS1, const CStudent& zS2)
{
	if (zS1.sumScore > zS2.sumScore) {
		cout << zS1.mpName << "��" << zS2.mpName << "��ѧϰ�ɼ��ã�" << endl;
	}
	else {
		cout << zS2.mpName << "��" << zS1.mpName << "��ѧϰ�ɼ��ã�" << endl;
	}

}