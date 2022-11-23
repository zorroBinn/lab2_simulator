#pragma once
#include "Clothes.h"
#include <String>
using namespace std;
using std::string;
//Объект персонаж (человек)
class Human
{
protected:
	int Age; //Возраст
	long int Moneybalance; //Игровой баланс
	string Name, Sex; //Имя, пол
	Clothes clothes; //Одежда персонажа

public:
	Human(); //Конструктор без параметров
	Human(Clothes clothes); //конструктор с одним параметром
	Human(int age, string name, string sex, Clothes clothes);//Конструктор с параметрами
	int GetAge();
	string GetSex();
	Clothes GetClothes();
	void HumanRead(); //Ввод информации о персонаже с клавиатуры
	void HumanNameSexAgeDisplay(); //Вывод имени, пола, возраста (для медкарты)
	void HumanCardDisplay();//Вывод имени, возраста (перегружен в производном классе)
	void ChangeMoney(long int money); //Метод изменения баланса
	long int GetMoneyBalance(); //Метод вывода баланса (геттер)
	string GetName(); //Метод вывода имени персонажа (геттер)
	friend void CheatsMoneyBalance(Human& human); //Дружественная функция - чит на деньги
	Human& operator ++ (); //Перегрузка префиксного ++
	Human operator ++ (int); //Перегрузка постфиксного ++
	friend ostream& operator << (ostream& out, Human human);//Вывод информации о персонаже(перегрузка <<)
};

void CheatsMoneyBalance(Human& human); //Чит на деньги