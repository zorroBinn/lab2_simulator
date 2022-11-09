#include "Work.h"
#include <iostream>
#include <String>
using namespace std;

//Конструктор без параметров
Work::Work()
{
	this->NameWork = "";
	this->Payment = 0;
}

//конструктор с одним параметром
Work::Work(Human human)
{
	this->human = human;
}

//Конструктор с параметрами
Work::Work(Human human, string namework, int payment)
{
	this->NameWork = namework;
	this->Payment = payment;
	this->human = human;
}

//Инициализация работы
void Work::WorkInit(Human human, string namework, int payment)
{
	this->NameWork = namework;
	this->Payment = payment;
	this->human = human;
}

//Ввод информации о работе с клавиатуры
void Work::WorkRead(Human human)
{
	int payment;
	string strnamework;
	cout << "\nУкажите название работы: ";
	cin >> strnamework;
	cout << "\nУкажите оплату за работу: ";
	cin >> payment;
	this->NameWork = strnamework;
	this->Payment = payment;
	this->human = human;
}

//Вывод информации о работе
void Work::WorkDisplay()
{
	cout << "\nРабота персонажа " << human.HumanGetName() << ":\nМесто работы: " << NameWork << "\nОплата за работу: " << Payment << endl;
}

//Метод "работать"
void Work::Working(Human human)
{
	cout << "\nЗа свою работу вы получили " << Payment << "р!";
	this->human.ChangeMoney(Payment);
}

//перегрузка оператора +
Work Work::operator+(const Work& other)
{
	Work temp = Work(this->human, this->NameWork + ", " + other.NameWork, this->Payment + other.Payment);
	return temp;
}
