#pragma once
#include "Human.h"
#include <String>
using namespace std;
using std::string;

class Worker : public Human
{
protected:
	string NameWork; //�������� ������
	int Payment; //������ �� ������

public:
	Worker();//����������� ��� ����������
	Worker(Human& human, string namework, int payment);//����������� � �����������
	void WorkerRead(Human& human);//���� ���������� � ��������� � ����������
	void WorkerDisplay();
	void Working(Human &human);//����� "��������"
	Worker& operator= (Human& human);
};

