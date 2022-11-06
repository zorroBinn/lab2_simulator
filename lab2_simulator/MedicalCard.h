#pragma once
#include "Human.h"
using namespace std;
//Объект медицинская карта персонажа
class MedicalCard
{
	Human human; //Персонаж
	int Weight, Height; //Вес и рост
	string HealthStatus; //Статус здоровья персонажа

public:
	MedicalCard();//Конструктор без параметров
	MedicalCard(Human human, int weight, int height, string healthstatus);//Конструктор с параметрами
	void MedicalCardRead(Human human);//Ввод информации о медкарте с клавиатуры
	void MedicalcardDisplay();//Вывод информации о медкарте
	void BodyMassIndex();//Метод рассчёта индекса массы тела персонажа
	void SetHealthStatus(); //Метод изменения статуса здоровья
};