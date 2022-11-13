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

	//���������� ������
	Clothes clothes[2];
	cout << "���� ������� ����� ������" << endl;
	for (int i = 0; i < 2; i++) {
		clothes[i].ClothesRead();
	}
	cout << "����� ������� ����� ������" << endl;
	for (int i = 0; i < 2; i++) {
		clothes[i].ClothesDisplay();
	}

	Human human;
	human.HumanRead();
	human.HumanDisplay();
	//��������� ������
	Work** work = new Work * [2];
	for (int i = 0; i < 2; i++) {
		work[i] = new Work[2];
	}
	cout << "���� ���������� ������� �����" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			work[i][j].WorkRead(human);
		}
	}
	cout << "����� ���������� ������� �����" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			work[i][j].WorkDisplay();
		}
	}
	cout << "�������� �� ���� �������:" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			work[i][j].Working(human);
		}
	}
	cout << "\n�������� ������: " << human.MoneyBalanceDisplay() << endl;
	for (int i = 0; i < 2; i++)
		delete[] work[i];
	delete[] work;
	//delete[] clothes;

	cin.get(); 
	cin.get();
}