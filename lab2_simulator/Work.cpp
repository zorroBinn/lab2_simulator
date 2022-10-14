#include "Work.h"
#include <iostream>
//����������� ��� ����������
Work::Work()
{
	strcpy_s(this->NameWork, "");
	this->Payment = 0;
	this->human = Human();
}
//����������� � �����������
Work::Work(Human human, const char namework[30], int payment)
{
	strcpy_s(this->NameWork, namework);
	this->Payment = payment;
	this->human = human;
}
//������������� ������
void Work::WorkInit(Human human, const char namework[30], int payment)
{
	strcpy_s(this->NameWork, namework);
	this->Payment = payment;
	this->human = human;
}
//���� ���������� � ������ � ����������
void Work::WorkRead(Human human)
{
	int payment;
	char strnamework[30];
	std::cout << "\n������� �������� ������: ";
	std::cin >> strnamework;
	std::cout << "\n������� ������ �� ������: ";
	std::cin >> payment;
	strcpy_s(this->NameWork, strnamework);
	this->Payment = payment;
	this->human = human;
}
//����� ���������� � ������
void Work::WorkDisplay()
{
	std::cout << "\n������ ��������� " << human.HumanGetName() << ":\n����� ������: " << NameWork << "\n������ �� ������: " << Payment;
}
//����� "��������"
void Work::Working(Human human)
{
	std::cout << "\n�� ���� ������ �� �������� " << Payment << "�!";
	this->human.ChangeMoney(Payment);
}