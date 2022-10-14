#include "Work.h"
#include <iostream>
//Конструктор без параметров
Work::Work()
{
	strcpy_s(this->NameWork, "");
	this->Payment = 0;
	this->human = Human();
}
//Конструктор с параметрами
Work::Work(Human human, const char namework[30], int payment)
{
	strcpy_s(this->NameWork, namework);
	this->Payment = payment;
	this->human = human;
}
//Инициализация работы
void Work::WorkInit(Human human, const char namework[30], int payment)
{
	strcpy_s(this->NameWork, namework);
	this->Payment = payment;
	this->human = human;
}
//Ввод информации о работе с клавиатуры
void Work::WorkRead(Human human)
{
	int payment;
	char strnamework[30];
	std::cout << "\nУкажите название работы: ";
	std::cin >> strnamework;
	std::cout << "\nУкажите оплату за работу: ";
	std::cin >> payment;
	strcpy_s(this->NameWork, strnamework);
	this->Payment = payment;
	this->human = human;
}
//Вывод информации о работе
void Work::WorkDisplay()
{
	std::cout << "\nРабота персонажа " << human.HumanGetName() << ":\nМесто работы: " << NameWork << "\nОплата за работу: " << Payment;
}
//Метод "работать"
void Work::Working(Human human)
{
	std::cout << "\nЗа свою работу вы получили " << Payment << "р!";
	this->human.ChangeMoney(Payment);
}