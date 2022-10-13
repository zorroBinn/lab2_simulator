#pragma once
#include "Human.h"
//Объект медицинская карта персонажа
typedef struct {
	Human human; //Персонаж
	int Weight, Height; //Вес, рост персонажа
	char HealthStatus[25]; //Статус здоровья персонажа
} MedicalCard;

MedicalCard MedicalCardInit(Human human, int weight, int height, const char healthstatus[25]); //Инициализация медкарты
MedicalCard MedicalCardRead(Human human); //Заполнение информации медицинской карты с клавиатуры
void MedicalcardDisplay(MedicalCard medicalcard); //Вывод информации медицинской карты
void BodyMassIndex(MedicalCard medicalcard); //Функция рассчёта индекса массы тела персонажа
void SetHealthStatus(MedicalCard &medicalcard); //Функция изменения статуса здоровья персонажа