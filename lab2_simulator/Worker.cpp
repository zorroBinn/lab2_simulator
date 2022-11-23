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
	cout << endl;
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
	*this = human;
}

//���������� ������ �������� ������ � �����������
void Worker::HumanCardDisplay()
{
	cout << endl;
	cout << "���������� � ���������: " << endl;
	Human::HumanCardDisplay();
	cout << "����� ������: " << NameWork << "\n������ �� ������: " << Payment << endl;
}

//����� "��������"
void Worker::Working(Human &human)
{
	cout << endl;
	cout << "�� ���� ������ �� �������� " << Payment << "�!" << endl;
	human.ChangeMoney(Payment);
	*this = human;
}

//���������� ��������� ������������ ������������ ������ �������� 
Worker& Worker::operator=(Human& human)
{
	this->Age = human.GetAge();
	this->Name = human.GetName();
	this->Sex = human.GetSex();
	this->clothes = human.GetClothes();
	this->Moneybalance = human.GetMoneyBalance();
	return *this;
}

//����� ���������� � ��������� (���������� <<)
ostream& operator<<(ostream& out, Worker worker)
{
	out << "\n����� ������ "<< worker.Name << ":" << worker.NameWork << "\n������ �� ������: " << worker.Payment;
	return out;
}
