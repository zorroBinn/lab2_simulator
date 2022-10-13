#pragma once
#include "Human.h"
//Объект работа
typedef struct {
	char NameWork[30]; //Название работы
	int Payment; //Оплата за работу
} Work;

Work WorkInit(const char namework[30], int payment); //Инициализация работы
Work WorkRead(); //Заполнение информации о работе с клавиатуры
void WorkDisplay(Work work); //Вывод информации о работе
void Working(Work work, Human &human); //Функция "Работать"