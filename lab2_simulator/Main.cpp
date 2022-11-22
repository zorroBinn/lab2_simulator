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
	Document doc;
	cout << doc.GetNomber() << endl;
	Clothes cl;
	cl.ClothesRead();
	Human human(21, "Ивна", "м", cl);
	

	MedicalCard md;
	md.MedicalCardRead(human);
	
	md.MedicalcardDisplay();
	md = doc;
	md.MedicalcardDisplay();
	cin.get(); 
	cin.get();
}