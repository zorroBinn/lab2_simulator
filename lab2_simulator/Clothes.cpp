#include "Clothes.h"
#include <iostream>
using namespace std;
//����������� ��� ����������
Clothes::Clothes()
{
	this->ClothesStatus = 0;
	this->Body = "";
	this->Pants = "";
	this->Shoes = "";
}
//����������� � �����������
Clothes::Clothes(int conditions, string body, string pants, string shoes)
{
	this->ClothesStatus = conditions;
	this->Body = body;
	this->Pants = pants;
	this->Shoes = shoes;
}
//���� ���������� �� ������ � ����������
void Clothes::ClothesRead()
{
	int status;
	string strbody, strpants, strshoes;
	cout << "\n������� ���������� �� ������ ���������:\n������� ������: ";
	cin >> strbody;
	cout << "�����: ";
	cin >> strpants;
	cout << "�����: ";
	cin >> strshoes;
	cout << "��������� ������ (� %): ";
	cin >> status;
	this->ClothesStatus = status;
	this->Body = strbody;
	this->Pants = strpants;
	this->Shoes = strshoes;
}
//����� ���������� �� ������
void Clothes::ClothesDisplay()
{
	cout << "\n������� ������: " << Body << "\n�����: " << Pants << "\n�����: " << Shoes << "\n��������� ������: " << ClothesStatus;
}
//����� "������� ������"
void Clothes::TearClothes()
{
	if (this->ClothesStatus > 0) {
		printf("\n\n���� ������ ���������!");
		this->ClothesStatus -= 15;
		if (this->ClothesStatus < 0)
			this->ClothesStatus = 0;
	}
}
//����� "������ ������"
void Clothes::SewUpClothes()
{
	if (this->ClothesStatus >= 0) {
		printf("\n\n�� ������ ���� ������!");
		this->ClothesStatus += 20;
		if (this->ClothesStatus > 100)
			this->ClothesStatus = 100;
	}
}