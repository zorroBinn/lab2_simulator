#pragma once
#include "Clothes.h"
#include <String>
using namespace std;
using std::string;
//Объект персонаж (человек)
class Human
{
	int Age; //Возраст
	long int Moneybalance; //Игровой баланс
	string Name, Sex; //Имя, пол
	Clothes clothes; //Одежда персонажа

public:
	Human(); //Конструктор без параметров
	Human(int age, string name, string sex, Clothes clothes);//Конструктор с параметрами
	void HumanRead(); //Ввод информации о персонаже с клавиатуры
	void HumanDisplay(); //Вывод информации о персонаже
	void HumanNameSexAgeDisplay(); //Вывод имени, пола, возраста (для медкарты)
	void ChangeMoney(long int money); //Метод изменения баланса
	long int MoneyBalanceDisplay(); //Метод вывода баланса (геттер)
	string HumanGetName(); //Метод вывода имени персонажа (геттер)
};