#pragma once
//Объект одежда
typedef struct {
	int ClothesStatus; //Статус целостности одежды
	char Body[20], Pants[20], Shoes[20]; //Одежда: верх, штаны, обувь
} Clothes;

Clothes ClothesInit(int conditions, const char body[20], const char pants[20], const char shoes[20]); //Инициализация одежды
Clothes ClothesRead(); //Ввод одежды через клавиатуру
void ClothesDisplay(Clothes clothes); //Вывод информации об одежде
void TearClothes(Clothes &clothes); //Функия "Порвать одежду"
void SewUpClothes(Clothes &clothes); //Функция "Починить одежду"
