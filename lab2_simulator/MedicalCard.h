#pragma once
#include "Human.h"
#include <String>
using namespace std;
using std::string;
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
	void BodyMassIndex(double* rez);
	void BodyMassIndex(double& rez);
	void SetHealthStatus(); //Метод изменения статуса здоровья
	friend void CheatsHealthStatus(MedicalCard& medicalcard);
};

void CheatsHealthStatus(MedicalCard& medicalcard);