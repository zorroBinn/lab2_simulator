#include <iostream>
#include <Windows.h>
#include <string.h>
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Realty.h"
#include "Work.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Тест класса Clothes:\n";
	//Динамические объекты
	Clothes* clothes1 = new Clothes; 
	Clothes* clothes2 = new Clothes(70, "Куртка", "Джинсы", "Кеды");
	std::cout << "\nКонструктор без параметров и с параметрами:\n";
	clothes1->ClothesDisplay();
	clothes2->ClothesDisplay();
	delete clothes2;
	std::cout << "\nВвод с клавиатуры:\n";
	clothes1->ClothesRead();
	std::cout << "\nТест методов:\n";
	clothes1->TearClothes();
	clothes1->ClothesDisplay();
	clothes1->SewUpClothes();
	clothes1->ClothesDisplay();
	
	std::cout << "\nТест класса Human:\nКонструктор с параметрами:\n";
	Human* human = new Human(19, "Иван", "М", *clothes1); //Динамический объект
	human->HumanDisplay();
	std::cout << "\nВвод с клавиатуры:\n";
	human->HumanRead();
	human->HumanDisplay();

	std::cout << "\nТест класса MedicalCard:\nКонструктор с параметрами:\n";
	MedicalCard medicalkard(*human, 78, 182, "Здоров"); //Статический объект
	medicalkard.MedicalcardDisplay();
	std::cout << "\nВвод с клавиатуры:\n";
	medicalkard.MedicalCardRead(*human);
	medicalkard.MedicalcardDisplay();
	std::cout << "\nТест методов:\n";
	medicalkard.BodyMassIndex();
	medicalkard.SetHealthStatus();
	medicalkard.MedicalcardDisplay();

	std::cout << "\nТест класса Work:\n";
	Work* works = new Work[3]; //Динамический массив
	std::cout << "\nИнициализация динамического массива работ:\n";	
	for (int i = 0; i < 3; i++) {
		std::cout << "\nРабота номер " << i+1;
		works[i].WorkInit("Работа", (i+1) * 10000);
		works[i].WorkDisplay();
	}
	std::cout << "\nВвод с клавиатуры динамического массива работ:\n";
	for (int i = 0; i < 3; i++) {
		std::cout << "\nРабота номер " << i+1;
		works[i].WorkRead();
		works[i].WorkDisplay();
	}
	std::cout << "\nТест методов:\n";
	for (int i = 0; i < 3; i++) {
		works[i].Working(*human);
	}
	delete[] works;

	std::cout << "\nТест класса Realty:\n";
	Realty* realtyes[3]; //Массив динамических объектов
	for (int i = 0; i < 3; i++) {
		realtyes[i] = new Realty;
		realtyes[i]->RealtyRead();
	}
	std::cout << "\nТест методов:\n";
	human->ChangeMoney(1000000000); //чит на деньги (для теста)
	for (int i = 0; i < 3; i++) {
		realtyes[i]->BuyNew(*human);
		realtyes[i]->RealtyDisplay();
	}
	for (int i = 0; i < 3; i++) {
		delete realtyes[i];
	}
	delete human, clothes1, medicalkard;
	
	std::cin.get(); 
	std::cin.get();
}