#pragma once
#include "Clothes.h"
//Объект игровой персонаж (человек)
typedef struct {
	int Age;//Возраст
	long int Moneybalance; //Игровой баланс денег
	char Name[40], Sex[20]; //Имя персонажа и пол
	Clothes clothes; //Одежда персонажа
} Human;

Human HumanInit(int age, const char name[20], const char sex[20], Clothes clothes); //Инициализация персонажа
Human HumanRead(); //Ввод персонажа с клавиатуры
void HumanDisplay(Human human, Clothes clothes); //Вывод информации о персонаже
void HumanUpgradeClothes(Human &human, Clothes clothes); //Функция обновления одежды персонажа