#include "Clothes.h"
#include <iostream>
#include <String>
using namespace std;
int Clothes::count = 0;
//����������� ��� ����������
Clothes::Clothes()
{
	this->ClothesStatus = 0;
	this->Body = "";
	this->Pants = "";
	this->Shoes = "";
	count++;
}
//����������� � �����������
Clothes::Clothes(int conditions, string body, string pants, string shoes)
{
	this->ClothesStatus = conditions;
	this->Body = body;
	this->Pants = pants;
	this->Shoes = shoes;
	count++;
	this->clothingsetcount = count;
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
	count++;
	this->clothingsetcount = count;
}
//����� ���������� �� ������
void Clothes::ClothesDisplay()
{
	cout << "�������� ������ ����� " << clothingsetcount << ":\n������� ������ : " << Body << "\n����� : " << Pants << "\n����� : " << Shoes << "\n��������� ������ : " << ClothesStatus;
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

int Clothes::Getcount()
{
	return count;
}

Clothes Clothes::operator+(Clothes& other)
{
	Clothes temp;
	temp.Body = this->Body + ", " + other.Body;
	temp.Pants = this->Pants + ", " + other.Pants;
	temp.Shoes = this->Shoes + ", " + other.Shoes;
	temp.ClothesStatus = (this->ClothesStatus + other.ClothesStatus) / 2;
	Clothes::count--;
	return temp;
}

void CheatsSewUpClothes(Clothes& clothes)
{
	clothes.ClothesStatus = 100;
}
