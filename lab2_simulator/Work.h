#pragma once
#include "Human.h"
using namespace std;
//������ ������
class Work
{
	Human human; //��������
	string NameWork; //�������� ������
	int Payment; //������ �� ������

public:
	Work();//����������� ��� ����������
	Work(Human human, string namework, int payment);//����������� � �����������
	void WorkInit(Human human, string namework, int payment);//������������� ������
	void WorkRead(Human human);//���� ���������� � ������ � ����������
	void WorkDisplay();//����� ���������� � ������
	void Working(Human human);//����� "��������"
};