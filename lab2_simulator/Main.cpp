#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Work.h"
#include "Realty.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	puts("Создание персонажа (тест структуры Human и Clothes:");
	Human* human;
	Clothes* clothes;
	human = (Human*)malloc(sizeof(Human));
	clothes = (Clothes*)malloc(sizeof(Clothes));
	puts("Создание персонажа: ");
	HumanRead(*clothes);
	puts("Вывод информации о человеке: ");
	HumanDisplay(*human, *clothes);
	puts("Инициализация новой одежды и вывод её на экран: ");
	ClothesInit(90, "Свитер", "Джинсы", "Кеды");
	ClothesDisplay(*clothes);
	puts("Ручное изменение одежды и вывод всей информации о человеке на экран: ");
	ClothesRead();
	HumanDisplay(*human, *clothes);
	puts("Порвать одежду: ");
	TearClothes(*clothes);
	ClothesDisplay(*clothes);
	puts("Зашить одежду: ");
	SewUpClothes(*clothes);
	ClothesDisplay(*clothes);
	
	puts("Тест структуры MedicalCard: ");
	MedicalCard* medicalcard;
	medicalcard = (MedicalCard*)malloc(sizeof(MedicalCard));
	puts("Инициализация медкарты: ");
	MedicalCardInit(*human, 76, 1.82, "Здоров");
	MedicalcardDisplay(*medicalcard);
	puts("создание медкарты: ");
	MedicalCardRead(*human);
	MedicalcardDisplay(*medicalcard);
	puts("Изменение статуса здоровья в медицинской карте: ");
	SetHealthStatus(*medicalcard);
	MedicalcardDisplay(*medicalcard);

	puts("Тест структуры Work: ");
	Work* work;
	work = (Work*)malloc(sizeof(Work));
	puts("Инициализация работы: ");
	WorkInit("Прокурор", 100);
}