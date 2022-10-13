#pragma once
#include "Clothes.h"
//объект одежда
class Clothes
{
	int ClothesStatus; //статус состояния одежды
	char Body[20], Pants[20], Shoes[20]; //Верх, штаны, обувь

public:
	Clothes(); //Конструктор без параметров
	Clothes(int conditions, const char body[20], const char pants[20], const char shoes[20]); //Конструктор с параметрами
	void ClothesRead(); //Ввод информации об одежде с клавиатуры
	void ClothesDisplay(); //Вывод информации об одежде
	void TearClothes(); //Метод "Порвать одежду"
	void SewUpClothes(); //Метод "Зашить одежду"
};

