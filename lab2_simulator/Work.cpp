#include "Work.h"
#include <iostream>

Work::Work()
{
}

Work::Work(const char namework[30], int payment)
{
	strcpy(this->NameWork, namework);
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
	strcpy(this->NameWork, strnamework);
	this->Payment = payment;
}

void Work::WorkDisplay()
{
	std::cout << "\n����� ������: " << NameWork << "\n������ �� ������: " << Payment;
}

void Work::Working(Human human)
{
	if (human.Moneybalance >= 0) {
		std::cout << "\n�� ���� ������ �� �������� " << Payment << "�!";
		human.Moneybalance += Payment;
	}
}
