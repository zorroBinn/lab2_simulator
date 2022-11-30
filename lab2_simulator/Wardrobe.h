#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Clothes.h"

using namespace std;

class Wardrobe //Класс гардероб
{
protected: 
	vector<Clothes> wardrobe; //Вектор класса одежда

public:
	void Add(Clothes clothes); //Метод добавления готовой одежды
	void Read(); //Метод ввода одежды с клавиатуры и добавления в вектор
	void Display(); //Метод вывода объектов вектора 
	void Delete(int num); //Метод удаления объекта из вектора
	void SortByClothesStatus(); //Сортировка объектов вектора по статусу одежды
	void SortByClothingSetCount(); //Сортировка объектов вектора по номеру сета одежды
	void SearchByClothesStatus(int st); //Поиск по статусу одежды
	void SearchByClothingSetCount(int count); //Поиск по номеру одежды
};

