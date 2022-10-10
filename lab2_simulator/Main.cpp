#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
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
	*human = HumanRead();
	puts("\nВывод информации о человеке: ");
	HumanDisplay(*human, *clothes);
	puts("\nИнициализация новой одежды и вывод её на экран: ");
	*clothes = ClothesInit(90, "Свитер", "Джинсы", "Кеды");
	ClothesDisplay(*clothes);
	puts("\nРучное изменение одежды и вывод всей информации о человеке на экран: ");
	*clothes = ClothesRead();
	HumanUpgradeClothes(*human, *clothes);
	HumanDisplay(*human, *clothes);
	puts("\nПорвать одежду: ");
	TearClothes(*clothes);
	ClothesDisplay(*clothes);
	puts("\nЗашить одежду: ");
	SewUpClothes(*clothes);
	ClothesDisplay(*clothes);
	
	puts("\nТест структуры MedicalCard: ");
	MedicalCard* medicalcard;
	medicalcard = (MedicalCard*)malloc(sizeof(MedicalCard));
	puts("\nИнициализация медкарты: ");
	*medicalcard = MedicalCardInit(*human, 76, 182, "Здоров");
	MedicalcardDisplay(*medicalcard);
	puts("\nCоздание медкарты: ");
	*medicalcard = MedicalCardRead(*human);
	MedicalcardDisplay(*medicalcard);
	puts("\nРассчёт ИМТ: ");
	BodyMassIndex(*medicalcard);
	puts("\nИзменение статуса здоровья в медицинской карте: ");
	SetHealthStatus(*medicalcard);
	MedicalcardDisplay(*medicalcard);

	puts("\nТест структуры Work: ");
	Work* work;
	work = (Work*)malloc(sizeof(Work));
	puts("Инициализация работы: ");
	*work = WorkInit("Прокурор", 100);
	WorkDisplay(*work);
	puts("\nCоздание работы: ");
	*work = WorkRead();
	WorkDisplay(*work);
	puts("\nРаботать: ");
	Working(*work, *human);
	puts("\nИгровой баланс денег увеличится: ");
	HumanDisplay(*human, *clothes);

	puts("\nТест структуры Realty: ");
	Realty* realty;
	realty = (Realty*)malloc(sizeof(Realty));
	puts("\nИнициализация недвижимости: \n");
	*realty = RealtyInit("Сарай", "Ноги");
	RealtyDisplay(*realty);
	puts("\nCоздание недвижимости: ");
	*realty = RealtyRead();
	RealtyDisplay(*realty);
	puts("\nПокупка новой недвижимости: ");
	BuyNew(*realty, *human);
	RealtyDisplay(*realty);

	_getch();
}