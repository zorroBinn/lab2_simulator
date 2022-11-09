#include <iostream>
#include <Windows.h>
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

	//Тест перегрузки префиксного и постфиксного ++
	Human human1(19, "Иван", "М", *clothes1);
	cout << "\nПервый персонаж: " << endl;
	human1.HumanDisplay();
	Human human2;
	cout << "Префиксный инкремент" << endl;
	human2 = ++human1;
	cout << "Первый персонаж: " << endl;
	human1.HumanNameSexAgeDisplay();
	cout << "Второй персонаж: " << endl;
	human2.HumanNameSexAgeDisplay();
	cout << "Постфиксный инкремент" << endl; 
	human2 = human1++;
	cout << "Первый персонаж: " << endl;
	human1.HumanNameSexAgeDisplay();
	cout << "Второй персонаж: " << endl;
	human2.HumanNameSexAgeDisplay();
	//Тест дружественной функции
	CheatsMoneyBalance(human1);

	//Тест вывода через ссылку/указатель
	MedicalCard* medicalcard = new MedicalCard(human1, 78, 182, "Насморк");
	double rez;
	medicalcard->MedicalcardDisplay();
	medicalcard->BodyMassIndex();
	medicalcard->BodyMassIndex(rez);//Передача значения из функции через указатель
	cout << "\nВозврат через указатель значения ИМТ: " << rez << endl;
	medicalcard->BodyMassIndex(&rez);//Передача значения из функции через ссылку
	cout << "Возврат через ссылку значения ИМТ: " << rez << endl;
	//Тест дружественной функции
	CheatsHealthStatus(*medicalcard);

	//Тест перегрузки +
	Work work1(human1, "Работа1", 10000);
	work1.WorkDisplay();
	Work work2(human1, "Работа2", 5000);
	work2.WorkDisplay();
	Work work;
	work = work1 + work2;	
	work.WorkDisplay();

	
	cin.get(); 
	cin.get();
}