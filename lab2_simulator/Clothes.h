#pragma once
#include "Clothes.h"
#include <String>
using namespace std;
using std::string;
//объект одежда
class Clothes
{
protected:
	int ClothesStatus, clothingsetcount; //статус состояния одежды, номер сета одежды
	string Body, Pants, Shoes; //Верх, штаны, обувь
	static int count;//Статическая переменная, отражает количество объектов класса одежда

public:
	Clothes(); //Конструктор без параметров
	Clothes(int conditions, string body, string pants, string shoes); //Конструктор с параметрами
	void ClothesRead(); //Ввод информации об одежде с клавиатуры
	void ClothesDisplay();
	int GetClothingSetCount();
	int GetClothesStatus();
	void TearClothes(); //Метод "Порвать одежду"
	void SewUpClothes(); //Метод "Зашить одежду"
	static int Getcount(); //Статическая функция возврата количества сетов одежды
	friend void CheatsSewUpClothes(Clothes& clothes);//Дружественная функция - чит на починку одежды
	friend ostream& operator << (ostream& out,Clothes clothes); //Вывод информации об одежде (перегрузка <<)
};

void CheatsSewUpClothes(Clothes& clothes);//чит на починку одежды