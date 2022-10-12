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
	std::cout << "\nВведите информацию о персонажe:\nИмя: ";
	std::cin >> strname;
	std::cout << "Пол: ";
	std::cin >> strsex;
	std::cout << "Возраст: ";
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
	std::cout << "\nИмя персонажа: " << Name << "\nПол персонажа: " << Sex << "\nВозраст персонажа: " << Age << "\nИгровой баланс денег: " << Moneybalance;
	clothes.ClothesDisplay();
}

void Human::HumanNameSexAgeDisplay()
{
	std::cout << "\nИмя персонажа: " << Name << "\nПол персонажа: " << Sex << "\nВозраст персонажа: " << Age;
}
