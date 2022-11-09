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

	//���� ����������� ���������� � ����������� �������
	Clothes* clothes1 = new Clothes(100, "�����", "�����", "����");
	Clothes* clothes2 = new Clothes(80, "�����", "�����", "�����");
	Clothes* clothes3 = new Clothes(20, "������", "������", "�������");
	cout << "����� ����� ������: " << Clothes::Getcount() << endl;
	clothes1->ClothesDisplay();
	clothes2->ClothesDisplay();
	clothes3->ClothesDisplay();
	//���� ������������� �������
	CheatsSewUpClothes(*clothes3);
	clothes3->ClothesDisplay();

	//���� ���������� ����������� � ������������ ++
	Human human1(19, "����", "�", *clothes1);
	cout << "\n������ ��������: " << endl;
	human1.HumanDisplay();
	Human human2;
	cout << "���������� ���������" << endl;
	human2 = ++human1;
	cout << "������ ��������: " << endl;
	human1.HumanNameSexAgeDisplay();
	cout << "������ ��������: " << endl;
	human2.HumanNameSexAgeDisplay();
	cout << "����������� ���������" << endl; 
	human2 = human1++;
	cout << "������ ��������: " << endl;
	human1.HumanNameSexAgeDisplay();
	cout << "������ ��������: " << endl;
	human2.HumanNameSexAgeDisplay();
	//���� ������������� �������
	CheatsMoneyBalance(human1);

	//���� ������ ����� ������/���������
	MedicalCard* medicalcard = new MedicalCard(human1, 78, 182, "�������");
	double rez;
	medicalcard->MedicalcardDisplay();
	medicalcard->BodyMassIndex();
	medicalcard->BodyMassIndex(rez);//�������� �������� �� ������� ����� ���������
	cout << "\n������� ����� ��������� �������� ���: " << rez << endl;
	medicalcard->BodyMassIndex(&rez);//�������� �������� �� ������� ����� ������
	cout << "������� ����� ������ �������� ���: " << rez << endl;
	//���� ������������� �������
	CheatsHealthStatus(*medicalcard);

	//���� ���������� +
	Work work1(human1, "������1", 10000);
	work1.WorkDisplay();
	Work work2(human1, "������2", 5000);
	work2.WorkDisplay();
	Work work;
	work = work1 + work2;	
	work.WorkDisplay();

	
	cin.get(); 
	cin.get();
}