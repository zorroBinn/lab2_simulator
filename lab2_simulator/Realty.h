#pragma once
#include "Human.h"
//Объект имущество
class Realty
{
	char Housing[30], Vehicle[30];//Жильё, транспортное средство

public:
	Realty();//Конструктор без параметров
	Realty(const char housing[30], const char vehicle[30]);//Конструктор с параметрами
	void RealtyRead();//Ввод информации об имуществе с клавиатуры
	void RealtyDisplay();//Вывод информации об имуществе
	void BuyNew(Human human);//Метод покупки нового имущества
};