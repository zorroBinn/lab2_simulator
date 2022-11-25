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
	cout << endl;
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
	*this = human;
}

//Перегрузка метода базового класса в производном
void Worker::HumanCardDisplay()
{
	cout << endl;
	cout << "Информация о занятости: " << endl;
	Human::HumanCardDisplay();
	cout << "Место работы: " << NameWork << "\nОплата за работу: " << Payment << endl;
}

//Метод "работать"
void Worker::Working(Human &human)
{
	cout << endl;
	cout << "За свою работу вы получили " << Payment << "р!" << endl;
	human.ChangeMoney(Payment);
	*this = human;
}

//Перегрузка оператора присваивания производному классу базового 
Worker& Worker::operator=(Human& human)
{
	this->Age = human.GetAge();
	this->Name = human.GetName();
	this->Sex = human.GetSex();
	this->clothes = human.GetClothes();
	this->Moneybalance = human.GetMoneyBalance();
	return *this;
}

//Вывод информации о работнике (перегрузка <<)
ostream& operator<<(ostream& out, Worker worker)
{
	out << "\nРаботник: " << worker.Name << "\nМесто работы: " << worker.NameWork << "\nОплата за работу: " << worker.Payment;
	return out;
}
