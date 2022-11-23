#include "Worker.h"
#include <iostream>
using namespace std;

//����������� ��� ����������
Worker::Worker()
{
	this->NameWork = "";
	this->Payment = 0;
}

//����������� � �����������
Worker::Worker(Human& human, string namework, int payment)
{
	this->NameWork = namework;
	this->Payment = payment;
	*this = human;
}

//���� ���������� � ��������� � ����������
void Worker::WorkerRead(Human& human)
{
	bool correctinput = 0;
	int payment;
	string strnamework, strpayment;
	while (!correctinput) {
		try
		{
			cout << "������� �������� ������: ";
			getline(cin, strnamework);
			correctinput = 1;
		}
		catch (const exception&)
		{
			cout << "������ ����� �������� ������" << endl;
		}
	}
	while (correctinput) {
		try
		{
			cout << "������� ������ �� ������: ";
			cin >> strpayment;
			payment = stoi(strpayment);
			if (payment < 0) {
				throw "������ �� ����� ���� ������ 0!";
			}
			correctinput = 0;
		}
		catch (invalid_argument& ex)
		{
			cout << "������������ ���� ������" << endl;
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
	cout << "������ ��������� " << Name << ":\n����� ������: " << NameWork << "\n������ �� ������: " << Payment << endl;
}

//����� "��������"
void Worker::Working(Human &human)
{
	cout << "�� ���� ������ �� �������� " << Payment << "�!" << endl;
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
