#pragma once
#include "Human.h"
#include <String>
using namespace std;
using std::string;
//������ ������
class Work
{
	Human human; //��������
	string NameWork; //�������� ������
	int Payment; //������ �� ������

public:
	Work();//����������� ��� ����������
	Work(Human human);//����������� � ����� ����������
	Work(Human human, string namework, int payment);//����������� � �����������
	void WorkInit(Human human, string namework, int payment);//������������� ������
	void WorkRead(Human human);//���� ���������� � ������ � ����������
	void WorkDisplay();//����� ���������� � ������
	void Working(Human human);//����� "��������"
	Work operator+(const Work& other); //���������� ��������� + (�������� 2� �����)
};