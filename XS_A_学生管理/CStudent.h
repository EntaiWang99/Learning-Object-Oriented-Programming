#include<iostream>
using namespace std;

#ifndef CSTUDENT_H
#define CSTUDENT_H
class CStudent {
	char mNo[9]; //ѧ��
	int gNo;
	char *mpName; //����
	int mScore[3]; //���Ź��γɼ�
	int sumScore;  //�ܳɼ�
	static int ID;
public:
	CStudent(); //���캯��
	CStudent(const CStudent& zS); //�������캯��
	~CStudent();

	void SetStudent();  //�����ɼ����ò�������
	void ShowStudent() const; //������ʾ

	int CompareScore(const CStudent& zS) const;
	int CompareScore(const CStudent* pS) const;
	
	friend void CompareScoreFriend(const CStudent& zS1, const CStudent& zS2);
};
#endif // !CSTUDENT_H
