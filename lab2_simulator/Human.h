#pragma once
#include "Clothes.h"
//Объект персонаж (человек)
class Human
{
	int Age; //Возраст
	long int Moneybalance; //Игровой баланс
	char Name[40], Sex[20]; //Имя, пол
	Clothes clothes; //Одежда персонажа

public:
	Human(); //Конструктор без параметров
	Human(int age, const char name[20], const char sex[20], Clothes clothes);//Конструктор с параметрами
	void HumanRead(); //Ввод информации о персонаже с клавиатуры
	void HumanDisplay(); //Вывод информации о персонаже
	void HumanNameSexAgeDisplay(); //Вывод имени, пола, возраста (для медкарты)
	void ChangeMoney(long int money); //Метод изменения баланса
	long int MoneyBalanceDisplay(); //Метод вывода баланса (геттер)
	char* HumanGetName(); //Метод вывода имени персонажа (геттер)
};