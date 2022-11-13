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
			getline(cin, strnamework);
			correctinput = 1;
		}
		catch (const exception&)
		{
			cout << "Ошибка ввода названия работы" << endl;
		}
	}
	while (correctinput) {
		try
		{
			cout << "\nУкажите оплату за работу: ";
			cin >> strpayment;
			payment = stoi(strpayment);
			if (payment < 0) {
				throw "Оплата не может быть меньше 0!";
			}
			correctinput = 0;
		}
		catch (invalid_argument &ex)
		{
			cout << "Некорректный ввод оплаты" << endl;
		}
		catch (const string ex)
		{
			cout << ex << endl;
		}
		cin.ignore(1024, '\n');
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
void Work::Working(Human &human)
{
	cout << "\nЗа свою работу вы получили " << Payment << "р!";
	human.ChangeMoney(Payment);
	this->human = human;
}

//перегрузка оператора +
Work Work::operator+(const Work& other)
{
	Work temp = Work(this->human, this->NameWork + ", " + other.NameWork, this->Payment + other.Payment);
	return temp;
}
