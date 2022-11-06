#include "Human.h"
#include <iostream>
using namespace std;
//Конструктор без параметров
Human::Human()
{
	this->Age = 0;
	this->Name = "";
	this->Moneybalance = 0;
	this->Sex = "";
	this->clothes = Clothes();
}
//Конструктор с параметрами
Human::Human(int age, string name, string sex, Clothes clothes)
{
	this->Age = age;
	this->Name = name;
	this->Moneybalance = 1000;
	this->Sex = sex;
	this->clothes = clothes;
}
//Ввод информации о персонаже с клавиатуры
void Human::HumanRead()
{
	string strname, strsex;
	int age;
	cout << "\nВведите информацию о персонажe:\nИмя: ";
	cin >> strname;
	cout << "Пол: ";
	cin >> strsex;
	cout << "Возраст: ";
	cin >> age;
	this->Age = age;
	this->Name = strname;
	this->Sex = strsex;
	clothes.ClothesRead();
	this->Moneybalance = 1000;
	this->clothes = clothes;
}
//Вывод информации о персонаже
void Human::HumanDisplay()
{
	cout << "\nИмя персонажа: " << Name << "\nПол персонажа: " << Sex << "\nВозраст персонажа: " << Age << "\nИгровой баланс денег: " << Moneybalance << "\nОдежда персонажа:\n";
	clothes.ClothesDisplay();
}
//Вывод имени, пола, возраста (для медкарты)
void Human::HumanNameSexAgeDisplay()
{
	cout << "\nИмя персонажа: " << Name << "\nПол персонажа: " << Sex << "\nВозраст персонажа: " << Age;
}
//Метод изменения баланса
void Human::ChangeMoney(long int money) 
{
	long int Balance = (this->Moneybalance + money);
	this->Moneybalance = Balance;
	
}
//Метод вывода баланса (геттер)
long int Human::MoneyBalanceDisplay()
{
	return this->Moneybalance;
}
//Метод вывода имени персонажа (геттер)
string Human::HumanGetName() 
{
	return this->Name;
}