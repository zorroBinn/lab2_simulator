#include "Human.h"
#include <iostream>
//����������� ��� ����������
Human::Human()
{
	this->Age = 0;
	strcpy_s(this->Name, "");
	this->Moneybalance = 0;
	strcpy_s(this->Sex, "");
	this->clothes = Clothes();
}
//����������� � �����������
Human::Human(int age, const char name[20], const char sex[20], Clothes clothes)
{
	this->Age = age;
	strcpy_s(this->Name, name);
	this->Moneybalance = 1000;
	strcpy_s(this->Sex, sex);
	this->clothes = clothes;
}
//���� ���������� � ��������� � ����������
void Human::HumanRead()
{
	char strname[20], strsex[20];
	int age;
	std::cout << "\n������� ���������� � ��������e:\n���: ";
	std::cin >> strname;
	std::cout << "���: ";
	std::cin >> strsex;
	std::cout << "�������: ";
	std::cin >> age;
	this->Age = age;
	strcpy_s(this->Name, strname);
	strcpy_s(this->Sex, strsex);
	clothes.ClothesRead();
	this->Moneybalance = 1000;
	this->clothes = clothes;
}
//����� ���������� � ���������
void Human::HumanDisplay()
{
	std::cout << "\n��� ���������: " << Name << "\n��� ���������: " << Sex << "\n������� ���������: " << Age << "\n������� ������ �����: " << Moneybalance << "\n������ ���������:\n";
	clothes.ClothesDisplay();
}
//����� �����, ����, �������� (��� ��������)
void Human::HumanNameSexAgeDisplay()
{
	std::cout << "\n��� ���������: " << Name << "\n��� ���������: " << Sex << "\n������� ���������: " << Age;
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
char* Human::HumanGetName() 
{
	return this->Name;
}