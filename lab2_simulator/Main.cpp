#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Work.h"
#include "Realty.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	puts("�������� ��������� (���� ��������� Human � Clothes:");
	Human* human;
	Clothes* clothes;
	human = (Human*)malloc(sizeof(Human));
	clothes = (Clothes*)malloc(sizeof(Clothes));
	puts("�������� ���������: ");
	HumanRead(*clothes);
	puts("����� ���������� � ��������: ");
	HumanDisplay(*human, *clothes);
	puts("������������� ����� ������ � ����� � �� �����: ");
	ClothesInit(90, "������", "������", "����");
	ClothesDisplay(*clothes);
	puts("������ ��������� ������ � ����� ���� ���������� � �������� �� �����: ");
	ClothesRead();
	HumanDisplay(*human, *clothes);
	puts("������� ������: ");
	TearClothes(*clothes);
	ClothesDisplay(*clothes);
	puts("������ ������: ");
	SewUpClothes(*clothes);
	ClothesDisplay(*clothes);
	
	puts("���� ��������� MedicalCard: ");
	MedicalCard* medicalcard;
	medicalcard = (MedicalCard*)malloc(sizeof(MedicalCard));
	puts("������������� ��������: ");
	MedicalCardInit(*human, 76, 1.82, "������");
	MedicalcardDisplay(*medicalcard);
	puts("�������� ��������: ");
	MedicalCardRead(*human);
	MedicalcardDisplay(*medicalcard);
	puts("��������� ������� �������� � ����������� �����: ");
	SetHealthStatus(*medicalcard);
	MedicalcardDisplay(*medicalcard);

	puts("���� ��������� Work: ");
	Work* work;
	work = (Work*)malloc(sizeof(Work));
	puts("������������� ������: ");
	WorkInit("��������", 100);
}