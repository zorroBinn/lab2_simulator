#include "Human.h"
#include <iostream>
#include <String>

using namespace std;

//����������� ��� ����������
Human::Human()
{
	this->Age = 0;
	this->Name = "";
	this->Moneybalance = 0;
	this->Sex = "";
}

//����������� � ����� ����������
Human::Human(Clothes clothes)
{
	this->clothes = clothes;
}

//����������� � �����������
Human::Human(int age, string name, string sex, Clothes clothes)
{
	this->Age = age;
	this->Name = name;
	this->Moneybalance = 1000;
	this->Sex = sex;
	this->clothes = clothes;
}

int Human::GetAge()
{
	return this->Age;
}

string Human::GetSex()
{
	return this->Sex;
}

Clothes Human::GetClothes()
{
	return this->clothes;
}

//���� ���������� � ��������� � ����������
void Human::HumanRead()
{
	string strname, strsex, strage;
	int age;
	bool correctinput = 0;
	cout << endl;
	while (!correctinput) {
		try
		{
			cout << "\n������� ���������� � ��������e:\n���: ";
			getline(cin, strname);
			cout << "���: ";
			getline(cin, strsex);
			correctinput = 1;
		}
		catch (const exception&)
		{
			cout << "������������ ���� ����� �/��� ����" << endl;
		}
	}
	while (correctinput) {
		try
		{
			cout << "�������: ";
			cin >> strage;
			age = stoi(strage);
			if (age < 0 || age > 110) {
				throw age;
			}
			correctinput = 0;
		}
		catch (invalid_argument & ex)
		{
			cout << "������������ ���� ��������" << endl;
		}
		catch (int ex)
		{
			cout << "������� ��������� �� ����� ��������� " << age << endl;
		}
		cin.ignore(1024, '\n');
	}
	this->Age = age;
	this->Name = strname;
	this->Sex = strsex;
	clothes.ClothesRead();
	this->Moneybalance = 1000;
	this->clothes = clothes;
}

//����� �����, ����, �������� (��� ��������)
void Human::HumanNameSexAgeDisplay()
{
	cout << "��� ���������: " << Name << "\n��� ���������: " << Sex << "\n������� ���������: " << Age << endl;
}

//����� �����, �������� (���������� � ����������� ������)
void Human::HumanCardDisplay()
{
	cout << "���: " << Name << "\n�������: " << Age << endl;
}

//����� ��������� �������
void Human::ChangeMoney(long int money) 
{
	long int Balance = (this->Moneybalance + money);
	this->Moneybalance = Balance;
}

//����� ������ ������� (������)
long int Human::GetMoneyBalance()
{
	return this->Moneybalance;
}

//����� ������ ����� ��������� (������)
string Human::GetName() 
{
	return this->Name;
}

//���������� ��������� ++ ����������� 
Human& Human::operator++()
{
	this->Age++;
	return *this;
}

//���������� ��������� ++ ������������ 
Human Human::operator++(int)
{
	Human temp(*this);
	this->Age++;
	return temp;
}

//��� �� ������
void CheatsMoneyBalance(Human& human) {
	cout << "\n����������� ���, ������ ��������!" << endl;
	human.Moneybalance = 1000000000;
}

//����� ���������� � ���������(���������� <<)
ostream& operator<<(ostream& out, Human human)
{
	out << "\n��� ���������: " << human.Name << "\n��� ���������: " << human.Sex << "\n������� ���������: " << human.Age << "\n������� ������ �����: " << human.Moneybalance << "\n������ ���������:";
	cout << human.clothes;
	return out;
}
