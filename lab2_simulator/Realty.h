#pragma once
#include "Human.h"
//Объект недвижимость
typedef struct {
	char Housing[30], Vehicle[30]; //Жильё и Транспортное средство
} Realty;

Realty RealtyInit(const char housing[30], const char vehicle[30]); //Инициализация недвижимости
Realty RealtyRead(); //Начальное заполнение недвижимости
void RealtyDisplay(Realty realty); //Вывод информации о недвижимости на экран
void BuyNew(Realty &realty, Human &human); //Функция покупки новой недвижимости