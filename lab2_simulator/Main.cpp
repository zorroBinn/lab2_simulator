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

	Clothes cl(88, "1", "2", "3");
	Human human(21, "Ивна", "м", cl);
	MedicalCard md(human, 79, 182, "здоров");
	md.MedicalcardDisplay();

	cin.get(); 
	cin.get();
}