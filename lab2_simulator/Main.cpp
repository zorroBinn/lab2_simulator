#include <iostream>
#include <Windows.h>
#include <string>
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Realty.h"
#include "Work.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Тест статической переменной и статической функции
	Clothes* clothes1 = new Clothes(100, "Кофта", "Трико", "Кеды");
	Clothes* clothes2 = new Clothes(80, "Майка", "Шорты", "Тапки");
	Clothes* clothes3 = new Clothes(20, "куртка", "Джинсы", "Ботинки");
	cout << "Всего сетов одежды: " << Clothes::Getcount() << endl;
	clothes1->ClothesDisplay();
	clothes2->ClothesDisplay();
	clothes3->ClothesDisplay();
	//Тест дружественной функции
	CheatsSewUpClothes(*clothes3);
	clothes3->ClothesDisplay();


	Human* human1 = new Human(19, "Иван", "М", *clothes1);
	human1->HumanDisplay();
	Human* human2 = new Human();
	cout << "Префиксный инкремент" << endl;
	human2 = ++human1;
	human1->HumanNameSexAgeDisplay();
	human2->HumanNameSexAgeDisplay();
	cout << "Постфиксный инкремент" << endl;
	human2 = human1++;
	human2->HumanNameSexAgeDisplay();
	human1->HumanNameSexAgeDisplay();
	//Тест дружественной функции
	CheatsMoneyBalance(*human1);

	MedicalCard* medicalcard = new MedicalCard(*human1, 78, 182, "Насморк");
	double rez;
	medicalcard->MedicalcardDisplay();
	medicalcard->BodyMassIndex();
	medicalcard->BodyMassIndex(rez);
	cout << "Возврат через указатель значения ИМТ: " << rez << endl;
	medicalcard->BodyMassIndex(&rez);
	cout << "Возврат через ссылку значения ИМТ: " << rez << endl;
	//Тест дружественной функции
	CheatsHealthStatus(*medicalcard);

	
	cin.get(); 
	cin.get();
}