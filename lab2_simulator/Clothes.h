#pragma once
#include "Clothes.h"
using namespace std;
//������ ������
class Clothes
{
	int ClothesStatus; //������ ��������� ������
	string Body, Pants, Shoes; //����, �����, �����

public:
	Clothes(); //����������� ��� ����������
	Clothes(int conditions, string body, string pants, string shoes); //����������� � �����������
	void ClothesRead(); //���� ���������� �� ������ � ����������
	void ClothesDisplay(); //����� ���������� �� ������
	void TearClothes(); //����� "������� ������"
	void SewUpClothes(); //����� "������ ������"
};

