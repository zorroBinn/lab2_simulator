#include "Human.h"
#include <iostream>
using namespace std;
//����������� ��� ����������
Human::Human()
{
	this->Age = 0;
	this->Name = "";
	this->Moneybalance = 0;
	this->Sex = "";
	this->clothes = Clothes();
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
	cout << "\n��� ���������: " << Name << "\n��� ���������: " << Sex << "\n������� ���������: " << Age;
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