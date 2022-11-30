#include <iostream>
#include <Windows.h>
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Realty.h"
#include "WhoIsRicher.h"
#include "Worker.h"
#include "Wardrobe.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Clothes* cl = new Clothes(99, "Футболка", "Штаны", "Кеды");
	Wardrobe wb;
	//Тест добавления
	wb.Add(*cl);
	wb.Add(Clothes(82, "t1", "t2", "t3"));
	wb.Add(Clothes(100, "t11", "t22", "t33"));
	wb.Display(); //Тест вывода
	cout << endl;
	//Тест удаления
	wb.Delete(2);
	wb.Display();
	cout << endl;
	//Тест ввода
	wb.Read();
	wb.Display();
	cout << endl;
	//Тест сортировки 1
	wb.SortByClothesStatus();
	wb.Display();
	cout << endl;
	//Тест сортировки 2
	wb.SortByClothingSetCount();
	wb.Display();
	cout << endl;
	//Тест поиска 1
	wb.SearchByClothesStatus(100);
	cout << endl;
	//Тест поиска 2
	wb.SearchByClothingSetCount(1);
	cout << endl;

	cin.get();
}