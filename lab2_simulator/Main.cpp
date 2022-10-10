#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
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
	*human = HumanRead();
	puts("\n����� ���������� � ��������: ");
	HumanDisplay(*human, *clothes);
	puts("\n������������� ����� ������ � ����� � �� �����: ");
	*clothes = ClothesInit(90, "������", "������", "����");
	ClothesDisplay(*clothes);
	puts("\n������ ��������� ������ � ����� ���� ���������� � �������� �� �����: ");
	*clothes = ClothesRead();
	HumanUpgradeClothes(*human, *clothes);
	HumanDisplay(*human, *clothes);
	puts("\n������� ������: ");
	TearClothes(*clothes);
	ClothesDisplay(*clothes);
	puts("\n������ ������: ");
	SewUpClothes(*clothes);
	ClothesDisplay(*clothes);
	
	puts("\n���� ��������� MedicalCard: ");
	MedicalCard* medicalcard;
	medicalcard = (MedicalCard*)malloc(sizeof(MedicalCard));
	puts("\n������������� ��������: ");
	*medicalcard = MedicalCardInit(*human, 76, 182, "������");
	MedicalcardDisplay(*medicalcard);
	puts("\nC������� ��������: ");
	*medicalcard = MedicalCardRead(*human);
	MedicalcardDisplay(*medicalcard);
	puts("\n������� ���: ");
	BodyMassIndex(*medicalcard);
	puts("\n��������� ������� �������� � ����������� �����: ");
	SetHealthStatus(*medicalcard);
	MedicalcardDisplay(*medicalcard);

	puts("\n���� ��������� Work: ");
	Work* work;
	work = (Work*)malloc(sizeof(Work));
	puts("������������� ������: ");
	*work = WorkInit("��������", 100);
	WorkDisplay(*work);
	puts("\nC������� ������: ");
	*work = WorkRead();
	WorkDisplay(*work);
	puts("\n��������: ");
	Working(*work, *human);
	puts("\n������� ������ ����� ����������: ");
	HumanDisplay(*human, *clothes);

	puts("\n���� ��������� Realty: ");
	Realty* realty;
	realty = (Realty*)malloc(sizeof(Realty));
	puts("\n������������� ������������: \n");
	*realty = RealtyInit("�����", "����");
	RealtyDisplay(*realty);
	puts("\nC������� ������������: ");
	*realty = RealtyRead();
	RealtyDisplay(*realty);
	puts("\n������� ����� ������������: ");
	BuyNew(*realty, *human);
	RealtyDisplay(*realty);

	_getch();
}