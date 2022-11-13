#include "Work.h"
#include <iostream>
#include <String>
#include <regex>
using namespace std;

//����������� ��� ����������
Work::Work()
{
	this->NameWork = "";
	this->Payment = 0;
}

//����������� � ����� ����������
Work::Work(Human human)
{
	this->human = human;
}

//����������� � �����������
Work::Work(Human human, string namework, int payment)
{
	this->NameWork = namework;
	this->Payment = payment;
	this->human = human;
}

//���� ���������� � ������ � ����������
void Work::WorkRead(Human human)
{
	bool correctinput = 0;
	int payment;
	string strnamework, strpayment;
	while (!correctinput) {
		try
		{
			cout << "\n������� �������� ������: ";
			cin >> strnamework;
			strnamework = regex_replace(strnamework, regex("^ +| +$|( ) +"), "$1");
			if (strnamework == "") {
				throw "������ ����� �������� ������";
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
			cout << "\n������� ������ �� ������: ";
			cin >> strpayment;
			payment = stoi(strpayment);
			correctinput = 0;
		}
		catch (invalid_argument &ex)
		{
			cout << "������������ ���� ������" << endl;
		}
	}
	this->NameWork = strnamework;
	this->Payment = payment;
	this->human = human;
}

//����� ���������� � ������
void Work::WorkDisplay()
{
	cout << "\n������ ��������� " << human.HumanGetName() << ":\n����� ������: " << NameWork << "\n������ �� ������: " << Payment << endl;
}

//����� "��������"
void Work::Working(Human human)
{
	cout << "\n�� ���� ������ �� �������� " << Payment << "�!";
	this->human.ChangeMoney(Payment);
	human = this->human;
}

//���������� ��������� +
Work Work::operator+(const Work& other)
{
	Work temp = Work(this->human, this->NameWork + ", " + other.NameWork, this->Payment + other.Payment);
	return temp;
}
