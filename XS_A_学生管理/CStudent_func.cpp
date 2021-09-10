#pragma warning(disable:4996)
#include<iostream>
#include <math.h> 
#include"CStudent.h"
using namespace std;

int CStudent::ID = 0;

CStudent::CStudent() {  //构造函数
	mpName = NULL;
	ID++;
	gNo = ID;
}

CStudent::CStudent(const CStudent& zS) {  //拷贝构造函数
	if (mpName != NULL) {
		mpName = new char[strlen(zS.mpName) + 1]; 
		strcpy(mpName, zS.mpName);	
	}
}

CStudent::~CStudent(){  //析构函数
	if (*mpName != NULL) {
		delete[] mpName;
		mpName = NULL;
	}
}

void CStudent::SetStudent() {
	mpName = new char[10]; //哪里new:根据需要来定，可以在构造函数，也可以在后面
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
		cout << mpName << "比" << zS.mpName << "的学习成绩好！" << endl;
		return 1;
	}
	else {
		cout << zS.mpName << "比" << mpName << "的学习成绩好！" << endl;
		return 0;
	}
}

int CStudent::CompareScore(const CStudent* pS) const{
	if (sumScore > pS->sumScore) {
		cout << mpName << "比" << pS->mpName << "的学习成绩好！" << endl;
		return 1;
	}
	else {
		cout << pS->mpName << "比" << mpName << "的学习成绩好！" << endl;
		return 0;
	}
}

void CompareScoreFriend(const CStudent& zS1, const CStudent& zS2)
{
	if (zS1.sumScore > zS2.sumScore) {
		cout << zS1.mpName << "比" << zS2.mpName << "的学习成绩好！" << endl;
	}
	else {
		cout << zS2.mpName << "比" << zS1.mpName << "的学习成绩好！" << endl;
	}

}