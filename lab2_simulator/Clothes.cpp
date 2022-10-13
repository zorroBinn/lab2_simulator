#include "Clothes.h"
#include <iostream>
//����������� ��� ����������
Clothes::Clothes()
{
	this->ClothesStatus = 0;
	strcpy_s(this->Body, "");
	strcpy_s(this->Pants, "");
	strcpy_s(this->Shoes, "");
}
//����������� � �����������
Clothes::Clothes(int conditions, const char body[20], const char pants[20], const char shoes[20])
{
	this->ClothesStatus = conditions;
	strcpy_s(this->Body, body);
	strcpy_s(this->Pants, pants);
	strcpy_s(this->Shoes, shoes);
}
//���� ���������� �� ������ � ����������
void Clothes::ClothesRead()
{
	int status;
	char strbody[20], strpants[20], strshoes[20];
	std::cout << "\n������� ���������� �� ������ ���������:\n������� ������: ";
	std::cin >> strbody;
	std::cout << "�����: ";
	std::cin >> strpants;
	std::cout << "�����: ";
	std::cin >> strshoes;
	std::cout << "��������� ������ (� %): ";
	std::cin >> status;
	this->ClothesStatus = status;
	strcpy_s(this->Body, strbody);
	strcpy_s(this->Pants, strpants);
	strcpy_s(this->Shoes, strshoes);
}
//����� ���������� �� ������
void Clothes::ClothesDisplay()
{
	std::cout << "\n������� ������: " << Body << "\n�����: " << Pants << "\n�����: " << Shoes << "\n��������� ������: " << ClothesStatus;
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