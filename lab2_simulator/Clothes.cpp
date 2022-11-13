#include "Clothes.h"
#include <iostream>
#include <string>

using namespace std;

int Clothes::count = 0;

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
	count++;
	this->clothingsetcount = count;
}

//���� ���������� �� ������ � ����������
void Clothes::ClothesRead()
{
	bool correctinput = 0;
	int status;
	string strbody, strpants, strshoes, strstatus;
	while (!correctinput) {
		try
		{
			cout << "\n������� ���������� �� ������ ���������:\n������� ������: ";
			getline(cin, strbody);
			cout << "�����: ";
			getline(cin, strpants);
			cout << "�����: ";
			getline(cin, strshoes);
			correctinput = 1;
		}
		catch (const exception&)
		{
			cout << "������������ ���� ������" << endl;
		}
	}
	while (correctinput) {
		try
		{
			cout << "��������� ������ (� %): ";
			cin >> strstatus;
			status = stoi(strstatus);
			if (status < 0 || status > 100) {
				throw status;
			}
			correctinput = 0;
		}
		catch (invalid_argument & ex)
		{
			cout << "������������ ���� �������� ����������� ������" << endl;
		}
		catch (int ex)
		{
			cout << "������ ����������� ������ �� ����� ���� ����� " << ex << endl;
		}
		cin.ignore(1024, '\n');
	}
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
	cout << "\n�������� ������ ����� " << clothingsetcount << ":\n������� ������ : " << Body << "\n����� : " << Pants << "\n����� : " << Shoes << "\n��������� ������ : " << ClothesStatus << endl;
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

//����������� ������� �������� ���������� ����� ������
int Clothes::Getcount()
{
	return count;
}

//��� �� ������� ������
void CheatsSewUpClothes(Clothes& clothes)
{
	cout << "\n����������� ���, ������ ��������� ��������!" << endl;
	clothes.ClothesStatus = 100;
}
