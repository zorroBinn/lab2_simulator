#include "Work.h"
#include <iostream>
#include <String>

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
			cout << "\n������� ������ �� ������: ";
			cin >> strpayment;
			payment = stoi(strpayment);
			if (payment < 0) {
				throw "������ �� ����� ���� ������ 0!";
			}
			correctinput = 0;
		}
		catch (invalid_argument &ex)
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
	this->human = human;
}

//����� ���������� � ������
void Work::WorkDisplay()
{
	cout << "\n������ ��������� " << human.HumanGetName() << ":\n����� ������: " << NameWork << "\n������ �� ������: " << Payment << endl;
}

//����� "��������"
void Work::Working(Human &human)
{
	cout << "\n�� ���� ������ �� �������� " << Payment << "�!";
	human.ChangeMoney(Payment);
	this->human = human;
}

//���������� ��������� +
Work Work::operator+(const Work& other)
{
	Work temp = Work(this->human, this->NameWork + ", " + other.NameWork, this->Payment + other.Payment);
	return temp;
}
