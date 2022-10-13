#include "Work.h"
#include <iostream>
//Конструктор без параметров
Work::Work()
{
	strcpy_s(this->NameWork, "");
	this->Payment = 0;
}
//Конструктор с параметрами
Work::Work(const char namework[30], int payment)
{
	strcpy_s(this->NameWork, namework);
	this->Payment = payment;
}
//Инициализация работы
void Work::WorkInit(const char namework[30], int payment)
{
	strcpy_s(this->NameWork, namework);
	this->Payment = payment;
}
//Ввод информации о работе с клавиатуры
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
//Вывод информации о работе
void Work::WorkDisplay()
{
	std::cout << "\nМесто работы: " << NameWork << "\nОплата за работу: " << Payment;
}
//Метод "работать"
void Work::Working(Human human)
{
	std::cout << "\nЗа свою работу вы получили " << Payment << "р!";
	human.ChangeMoney(Payment);
}