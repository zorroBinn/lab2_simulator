#include "Human.h"
#include <iostream>

Human::Human()
{
}

Human::Human(int age, const char name[20], const char sex[20], Clothes clothes)
{
	this->Age = age;
	strcpy(this->Name, name);
	this->Moneybalance = 1000;
	strcpy(this->Sex, sex);
	this->clothes = clothes;
}

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
	strcpy(this->Name, strname);
	strcpy(this->Sex, strsex);
	clothes.ClothesRead();
	this->Moneybalance = 1000;
	this->clothes = clothes;
}


void Human::HumanDisplay()
{
	std::cout << "\n��� ���������: " << Name << "\n��� ���������: " << Sex << "\n������� ���������: " << Age << "\n������� ������ �����: " << Moneybalance;
	clothes.ClothesDisplay();
}

void Human::HumanNameSexAgeDisplay()
{
	std::cout << "\n��� ���������: " << Name << "\n��� ���������: " << Sex << "\n������� ���������: " << Age;
}
