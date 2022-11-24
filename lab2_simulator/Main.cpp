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
	
	Clothes cl(77, "c", "b", "a");
	Human human(21, "����", "�", cl);
	Human human2(21, "47", "they", cl);

	MedicalCard md(human2, 79, 182, "������", 12312);
	cout << md << endl;

	Worker wk(human2, "������", 10000);
	CheatsMoneyBalance(wk);
	cout << "������: " << WhoIsRicher<Human>::WhoisRicher(human, wk);

	cin.get();
}