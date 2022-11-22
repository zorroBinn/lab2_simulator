#pragma once
#include "Human.h"
#include <String>
#include "Document.h"
using namespace std;
using std::string;
//Производный класс - медицинская карта персонажа
class MedicalCard: public Document
{
protected:
	Human human; //Персонаж
	int Weight, Height; //Вес и рост
	string HealthStatus; //Статус здоровья персонажа

public:
	MedicalCard();//Конструктор без параметров
	MedicalCard(Human human);//конструктор с одним параметром
	MedicalCard(Human human, int weight, int height, string healthstatus, int nomber);//Конструктор с параметрами
	void MedicalCardRead(Human human);//Ввод информации о медкарте с клавиатуры
	void MedicalcardDisplay();//Вывод информации о медкарте
	void BodyMassIndex();//Метод рассчёта индекса массы тела персонажа
	void BodyMassIndex(double* rez);//Возврат значения через указатель
	void BodyMassIndex(double& rez);//Возврат значения через ссылку
	void SetHealthStatus(); //Метод изменения статуса здоровья
	friend void CheatsHealthStatus(MedicalCard& medicalcard);//Дружественная функция - чит на здоровье
	MedicalCard& operator= (Document& documen);
};

void CheatsHealthStatus(MedicalCard& medicalcard); //Чит на здоровье