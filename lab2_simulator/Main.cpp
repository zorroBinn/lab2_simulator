#include <iostream>
#include <Windows.h>
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Realty.h"
#include "Worker.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Clothes cl(77, "c", "b", "a");
	Human human(21, "Иван", "м", cl);
	

	MedicalCard md(human, 79, 182, "здоров", 12312);
	md.MedicalcardDisplay();

	Worker wk(human, "Барыга", 10000);
	wk.WorkerDisplay();

	cin.get();
	cin.get();
}