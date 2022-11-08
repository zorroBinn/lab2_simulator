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

//���� ���������� � ��������� � ����������
void Human::HumanRead()
{
	string strname, strsex;
	int age;
	cout << "\n������� ���������� � ��������e:\n���: ";
	cin >> strname;
	cout << "���: ";
	cin >> strsex;
	cout << "�������: ";
	cin >> age;
	this->Age = age;
	this->Name = strname;
	this->Sex = strsex;
	clothes.ClothesRead();
	this->Moneybalance = 1000;
	this->clothes = clothes;
}

//����� ���������� � ���������
void Human::HumanDisplay()
{
	cout << "\n��� ���������: " << Name << "\n��� ���������: " << Sex << "\n������� ���������: " << Age << "\n������� ������ �����: " << Moneybalance << "\n������ ���������:\n";
	clothes.ClothesDisplay();
}

//����� �����, ����, �������� (��� ��������)
void Human::HumanNameSexAgeDisplay()
{
	cout << "\n��� ���������: " << Name << "\n��� ���������: " << Sex << "\n������� ���������: " << Age << endl;
}

//����� ��������� �������
void Human::ChangeMoney(long int money) 
{
	long int Balance = (this->Moneybalance + money);
	this->Moneybalance = Balance;
	
}

//����� ������ ������� (������)
long int Human::MoneyBalanceDisplay()
{
	return this->Moneybalance;
}

//����� ������ ����� ��������� (������)
string Human::HumanGetName() 
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
