#pragma once
#include "Clothes.h"
#include <String>
using namespace std;
using std::string;
//������ ������
class Clothes
{
protected:
	int ClothesStatus, clothingsetcount; //������ ��������� ������, ����� ���� ������
	string Body, Pants, Shoes; //����, �����, �����
	static int count;//����������� ����������, �������� ���������� �������� ������ ������

public:
	Clothes(); //����������� ��� ����������
	Clothes(int conditions, string body, string pants, string shoes); //����������� � �����������
	void ClothesRead(); //���� ���������� �� ������ � ����������
	virtual void ClothesDisplay();
	int GetClothingSetCount();
	int GetClothesStatus();
	string getBody();
	string getShoes();
	string getPants();
	void TearClothes(); //����� "������� ������"
	void SewUpClothes(); //����� "������ ������"
	static int Getcount(); //����������� ������� �������� ���������� ����� ������
	friend void CheatsSewUpClothes(Clothes& clothes);//������������� ������� - ��� �� ������� ������
	friend ostream& operator << (ostream& out,Clothes clothes); //����� ���������� �� ������ (���������� <<)
};

void CheatsSewUpClothes(Clothes& clothes);//��� �� ������� ������