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
	std::cout << "\nУкажите название работы: ";
	std::cin >> strnamework;
	std::cout << "\nУкажите оплату за работу: ";
	std::cin >> payment;
	strcpy_s(this->NameWork, strnamework);
	this->Payment = payment;
}

void Work::WorkDisplay()
{
	std::cout << "\nМесто работы: " << NameWork << "\nОплата за работу: " << Payment;
}

void Work::Working(Human human)
{
	std::cout << "\nЗа свою работу вы получили " << Payment << "р!";
	human.Moneybalance += Payment;
}
