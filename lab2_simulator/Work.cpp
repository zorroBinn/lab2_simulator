#include "Work.h"
#include <iostream>
#include <String>
using namespace std;
//����������� ��� ����������
Work::Work()
{
	this->NameWork = "";
	this->Payment = 0;
	this->human = Human();
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
	cout << "\n������ ��������� " << human.HumanGetName() << ":\n����� ������: " << NameWork << "\n������ �� ������: " << Payment;
}
//����� "��������"
void Work::Working(Human human)
{
	cout << "\n�� ���� ������ �� �������� " << Payment << "�!";
	this->human.ChangeMoney(Payment);
}