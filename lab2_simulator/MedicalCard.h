#pragma once
#include "Human.h"
//Объект медицинская карта персонажа
class MedicalCard
{
	Human human; //Персонаж
	int Weight, Height; //Вес и рост
	char HealthStatus[25]; //Статус здоровья персонажа

public:
	MedicalCard();//Конструктор без параметров
	MedicalCard(Human human, int weight, int height, const char healthstatus[25]);//Конструктор с параметрами
	void MedicalCardRead(Human human);//Ввод информации о медкарте с клавиатуры
	void MedicalcardDisplay();//Вывод информации о медкарте
	void BodyMassIndex();//Метод рассчёта индекса массы тела персонажа
	void SetHealthStatus(); //Метод изменения статуса здоровья
};