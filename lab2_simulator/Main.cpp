#include <iostream>
#include <Windows.h>
#include <string.h>
#include "Human.h"
#include "Clothes.h"
#include "MedicalCard.h"
#include "Realty.h"
#include "Work.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "���� ������ Clothes:\n";
	//������������ �������
	Clothes* clothes1 = new Clothes; 
	Clothes* clothes2 = new Clothes(70, "������", "������", "����");
	std::cout << "\n����������� ��� ���������� � � �����������:\n";
	clothes1->ClothesDisplay();
	clothes2->ClothesDisplay();
	delete clothes2;
	std::cout << "\n���� � ����������:\n";
	clothes1->ClothesRead();
	std::cout << "\n���� �������:\n";
	clothes1->TearClothes();
	clothes1->ClothesDisplay();
	clothes1->SewUpClothes();
	clothes1->ClothesDisplay();
	
	std::cout << "\n���� ������ Human:\n����������� � �����������:\n";
	Human* human = new Human(19, "����", "�", *clothes1); //������������ ������
	human->HumanDisplay();
	std::cout << "\n���� � ����������:\n";
	human->HumanRead();
	human->HumanDisplay();

	std::cout << "\n���� ������ MedicalCard:\n����������� � �����������:\n";
	MedicalCard medicalkard(*human, 78, 182, "������"); //����������� ������
	medicalkard.MedicalcardDisplay();
	std::cout << "\n���� � ����������:\n";
	medicalkard.MedicalCardRead(*human);
	medicalkard.MedicalcardDisplay();
	std::cout << "\n���� �������:\n";
	medicalkard.BodyMassIndex();
	medicalkard.SetHealthStatus();
	medicalkard.MedicalcardDisplay();

	std::cout << "\n���� ������ Work:\n";
	Work* works = new Work[3]; //������������ ������
	std::cout << "\n������������� ������������� ������� �����:\n";	
	for (int i = 0; i < 3; i++) {
		std::cout << "\n������ ����� " << i+1;
		works[i].WorkInit("������", (i+1) * 10000);
		works[i].WorkDisplay();
	}
	std::cout << "\n���� � ���������� ������������� ������� �����:\n";
	for (int i = 0; i < 3; i++) {
		std::cout << "\n������ ����� " << i+1;
		works[i].WorkRead();
		works[i].WorkDisplay();
	}
	std::cout << "\n���� �������:\n";
	for (int i = 0; i < 3; i++) {
		works[i].Working(*human);
	}
	delete[] works;

	std::cout << "\n���� ������ Realty:\n";
	Realty* realtyes[3]; //������ ������������ ��������
	for (int i = 0; i < 3; i++) {
		realtyes[i] = new Realty;
		realtyes[i]->RealtyRead();
	}
	std::cout << "\n���� �������:\n";
	human->ChangeMoney(1000000000); //��� �� ������ (��� �����)
	for (int i = 0; i < 3; i++) {
		realtyes[i]->BuyNew(*human);
		realtyes[i]->RealtyDisplay();
	}
	for (int i = 0; i < 3; i++) {
		delete realtyes[i];
	}
	delete human, clothes1, medicalkard;
	
	std::cin.get(); 
	std::cin.get();
}