#include "Work.h"
#include <iostream>

Work::Work()
{
	strcpy_s(this->NameWork, "");
	this->Payment = 0;
}

Work::Work(const char namework[30], int payment)
{
	strcpy_s(this->NameWork, namework);
	this->Payment = payment;
}

void Work::WorkInit(const char namework[30], int payment)
{
	strcpy_s(this->NameWork, namework);
	this->Payment = payment;
}

void Work::WorkRead()
{
	int payment;
	char strnamework[30];
	std::cout << "\n������� �������� ������: ";
	std::cin >> strnamework;
	std::cout << "\n������� ������ �� ������: ";
	std::cin >> payment;
	strcpy_s(this->NameWork, strnamework);
	this->Payment = payment;
}

void Work::WorkDisplay()
{
	std::cout << "\n����� ������: " << NameWork << "\n������ �� ������: " << Payment;
}

void Work::Working(Human human)
{
	std::cout << "\n�� ���� ������ �� �������� " << Payment << "�!";
	human.Moneybalance += Payment;
}
