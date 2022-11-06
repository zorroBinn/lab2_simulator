#pragma once
#include "Clothes.h"
#include <String>
using namespace std;
using std::string;
//объект одежда
class Clothes
{
	int ClothesStatus, clothingsetcount; //статус состояния одежды
	string Body, Pants, Shoes; //Верх, штаны, обувь
	static int count;

public:
	Clothes(); //Конструктор без параметров
	Clothes(int conditions, string body, string pants, string shoes); //Конструктор с параметрами
	void ClothesRead(); //Ввод информации об одежде с клавиатуры
	void ClothesDisplay(); //Вывод информации об одежде
	void TearClothes(); //Метод "Порвать одежду"
	void SewUpClothes(); //Метод "Зашить одежду"
	static int Getcount();
};

