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
	std::cout << "\nУкажите название работы: ";
	std::cin >> strnamework;
	std::cout << "\nУкажите оплату за работу: ";
	std::cin >> payment;
	strcpy(this->NameWork, strnamework);
	this->Payment = payment;
}

void Work::WorkDisplay()
{
	std::cout << "\nМесто работы: " << NameWork << "\nОплата за работу: " << Payment;
}

void Work::Working(Human human)
{
	if (human.Moneybalance >= 0) {
		std::cout << "\nЗа свою работу вы получили " << Payment << "р!";
		human.Moneybalance += Payment;
	}
}
