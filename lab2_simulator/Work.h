#pragma once
#include "Human.h"
//������ ������
class Work
{
	Human human; //��������
	char NameWork[30]; //�������� ������
	int Payment; //������ �� ������

public:
	Work();//����������� ��� ����������
	Work(Human human, const char namework[30], int payment);//����������� � �����������
	void WorkInit(Human human, const char namework[30], int payment);//������������� ������
	void WorkRead(Human human);//���� ���������� � ������ � ����������
	void WorkDisplay();//����� ���������� � ������
	void Working(Human human);//����� "��������"
};