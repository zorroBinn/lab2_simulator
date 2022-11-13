#include "Work.h"
#include <iostream>
#include <String>
#include <regex>
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

//Ввод информации о работе с клавиатуры
void Work::WorkRead(Human human)
{
	bool correctinput = 0;
	int payment;
	string strnamework, strpayment;
	while (!correctinput) {
		try
		{
			cout << "\nУкажите название работы: ";
			cin >> strnamework;
			strnamework = regex_replace(strnamework, regex("^ +| +$|( ) +"), "$1");
			if (strnamework == "") {
				throw "Ошибка ввода названия работы";
			}
			correctinput = 1;
		}
		catch (const string ex)
		{
			cout << ex << endl;
		}
	}
	while (correctinput) {
		try
		{
			cout << "\nУкажите оплату за работу: ";
			cin >> strpayment;
			payment = stoi(strpayment);
			correctinput = 0;
		}
		catch (invalid_argument &ex)
		{
			cout << "некорректный ввод оплаты" << endl;
		}
	}
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
	human = this->human;
}

//перегрузка оператора +
Work Work::operator+(const Work& other)
{
	Work temp = Work(this->human, this->NameWork + ", " + other.NameWork, this->Payment + other.Payment);
	return temp;
}
