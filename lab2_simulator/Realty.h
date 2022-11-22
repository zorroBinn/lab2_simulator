#pragma once
#include <String>
#include "Human.h"
using namespace std;
using std::string;
//Объект имущество
class Realty
{
protected:
	Human human; //Персонаж
	string Housing, Vehicle;//Жильё, транспортное средство

public:
	Realty();//Конструктор без параметров
	Realty(Human human);//конструктор с одним параметром
	Realty(Human human, string housing, string vehicle);//Конструктор с параметрами
	void RealtyRead(Human human);//Ввод информации об имуществе с клавиатуры
	void RealtyDisplay();//Вывод информации об имуществе
	void BuyNew(Human human);//Метод покупки нового имущества
};