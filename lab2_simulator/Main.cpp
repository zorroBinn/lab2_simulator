#include <iostream>
#include <Windows.h>
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Realty.h"
#include "WhoIsRicher.h"
#include "Worker.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Clothes cl(99, "Футболка", "Штаны", "Кеды");
	cout << cl << endl; //Вывод через перегрузку <<
	Human human(20, "Иван", "М", cl);
	Worker wk;
	wk = human; //Присвоение объекту производного класса объекта базового
	cout << wk << endl;
	//Вызов конструктора базового класса в конструкторе с параметрами производного
	MedicalCard* md = new MedicalCard(human, 78, 182, "Здоров", 11111);
	cout << *md << endl;
	//Вызов виртуальной функции
	md->ExtendDocument();
	
	Human* h = new Human(40, "name", "M", cl);
	Worker* w = new Worker(*h, "Бизнесмен", 80000);
	h->HumanCardDisplay(); 
	w->HumanCardDisplay();//Переопределение функции

	//Тест шаблонного класса
	Worker wk2(human, "Рекламщик", 10000);
	CheatsMoneyBalance(wk2);
	cout << "Богаче: " << WhoIsRicher<Human>::WhoisRicher(*h, wk);

	cin.get();
}