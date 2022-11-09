#include "Work.h"
#include <iostream>
#include <String>
using namespace std;

//����������� ��� ����������
Work::Work()
{
	this->NameWork = "";
	this->Payment = 0;
}

//����������� � ����� ����������
Work::Work(Human human)
{
	this->human = human;
}

//����������� � �����������
Work::Work(Human human, string namework, int payment)
{
	this->NameWork = namework;
	this->Payment = payment;
	this->human = human;
}

//������������� ������
void Work::WorkInit(Human human, string namework, int payment)
{
	this->NameWork = namework;
	this->Payment = payment;
	this->human = human;
}

//���� ���������� � ������ � ����������
void Work::WorkRead(Human human)
{
	int payment;
	string strnamework;
	cout << "\n������� �������� ������: ";
	cin >> strnamework;
	cout << "\n������� ������ �� ������: ";
	cin >> payment;
	this->NameWork = strnamework;
	this->Payment = payment;
	this->human = human;
}

//����� ���������� � ������
void Work::WorkDisplay()
{
	cout << "\n������ ��������� " << human.HumanGetName() << ":\n����� ������: " << NameWork << "\n������ �� ������: " << Payment << endl;
}

//����� "��������"
void Work::Working(Human human)
{
	cout << "\n�� ���� ������ �� �������� " << Payment << "�!";
	this->human.ChangeMoney(Payment);
}

//���������� ��������� +
Work Work::operator+(const Work& other)
{
	Work temp = Work(this->human, this->NameWork + ", " + other.NameWork, this->Payment + other.Payment);
	return temp;
}
