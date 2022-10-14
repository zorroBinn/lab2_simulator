#pragma once
#include "Human.h"
//Объект работа
class Work
{
	Human human; //Персонаж
	char NameWork[30]; //Название работы
	int Payment; //Оплата за работу

public:
	Work();//Конструктор без параметров
	Work(Human human, const char namework[30], int payment);//Конструктор с параметрами
	void WorkInit(Human human, const char namework[30], int payment);//Инициализация работы
	void WorkRead(Human human);//Ввод информации о работе с клавиатуры
	void WorkDisplay();//Вывод информации о работе
	void Working(Human human);//Метод "работать"
};