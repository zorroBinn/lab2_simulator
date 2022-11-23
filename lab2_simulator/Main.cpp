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
	Human human(21, "����", "�", cl);
	

	MedicalCard md(human, 79, 182, "������", 12312);
	md.MedicalcardDisplay();

	Worker wk(human, "������", 10000);
	wk.WorkerDisplay();

	cin.get();
	cin.get();
}