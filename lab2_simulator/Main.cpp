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

	//Одномерный массив
	Clothes clothes[2];
	cout << "ввод массива сетов одежды" << endl;
	for (int i = 0; i < 2; i++) {
		clothes[i].ClothesRead();
	}
	cout << "вывод массива сетов одежлы" << endl;
	for (int i = 0; i < 2; i++) {
		clothes[i].ClothesDisplay();
	}

	Human human;
	human.HumanRead();
	human.HumanDisplay();
	//Двумерный массив
	Work** work = new Work * [2];
	for (int i = 0; i < 2; i++) {
		work[i] = new Work[2];
	}
	cout << "Ввод двумерного массива работ" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			work[i][j].WorkRead(human);
		}
	}
	cout << "Вывод двумерного массива работ" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			work[i][j].WorkDisplay();
		}
	}
	cout << "Работать на всех работах:" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			work[i][j].Working(human);
		}
	}
	cout << "\nИтоговый баланс: " << human.MoneyBalanceDisplay() << endl;
	for (int i = 0; i < 2; i++)
		delete[] work[i];
	delete[] work;
	//delete[] clothes;

	cin.get(); 
	cin.get();
}