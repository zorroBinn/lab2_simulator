#pragma once
#include "Clothes.h"
using namespace std;
//объект одежда
class Clothes
{
	int ClothesStatus; //статус состояния одежды
	string Body, Pants, Shoes; //Верх, штаны, обувь

public:
	Clothes(); //Конструктор без параметров
	Clothes(int conditions, string body, string pants, string shoes); //Конструктор с параметрами
	void ClothesRead(); //Ввод информации об одежде с клавиатуры
	void ClothesDisplay(); //Вывод информации об одежде
	void TearClothes(); //Метод "Порвать одежду"
	void SewUpClothes(); //Метод "Зашить одежду"
};

