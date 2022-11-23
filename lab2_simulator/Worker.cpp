#include "Worker.h"
#include <iostream>
using namespace std;

//Конструктор без параметров
Worker::Worker()
{
	this->NameWork = "";
	this->Payment = 0;
}

//Конструктор с параметрами
Worker::Worker(Human& human, string namework, int payment)
{
	this->NameWork = namework;
	this->Payment = payment;
	*this = human;
}

//Ввод информации о работнике с клавиатуры
void Worker::WorkerRead(Human& human)
{
	bool correctinput = 0;
	int payment;
	string strnamework, strpayment;
	while (!correctinput) {
		try
		{
			cout << "Укажите название работы: ";
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
			cout << "Укажите оплату за работу: ";
			cin >> strpayment;
			payment = stoi(strpayment);
			if (payment < 0) {
				throw "Оплата не может быть меньше 0!";
			}
			correctinput = 0;
		}
		catch (invalid_argument& ex)
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
}

void Worker::WorkerDisplay()
{
	cout << "Работа персонажа " << Name << ":\nМесто работы: " << NameWork << "\nОплата за работу: " << Payment << endl;
}

//Метод "работать"
void Worker::Working(Human &human)
{
	cout << "За свою работу вы получили " << Payment << "р!" << endl;
	human.ChangeMoney(Payment);
	this->ChangeMoney(Payment);
}


Worker& Worker::operator=(Human& human)
{
	this->Age = human.GetAge();
	this->Name = human.GetName();
	this->Sex = human.GetSex();
	this->clothes = human.GetClothes();
	this->Moneybalance = human.GetMoneyBalance();
	return *this;
}
