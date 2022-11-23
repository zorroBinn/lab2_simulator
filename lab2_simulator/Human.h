#pragma once
#include "Clothes.h"
#include <String>
using namespace std;
using std::string;
//������ �������� (�������)
class Human
{
protected:
	int Age; //�������
	long int Moneybalance; //������� ������
	string Name, Sex; //���, ���
	Clothes clothes; //������ ���������

public:
	Human(); //����������� ��� ����������
	Human(Clothes clothes); //����������� � ����� ����������
	Human(int age, string name, string sex, Clothes clothes);//����������� � �����������
	int GetAge();
	string GetSex();
	Clothes GetClothes();
	void HumanRead(); //���� ���������� � ��������� � ����������
	void HumanNameSexAgeDisplay(); //����� �����, ����, �������� (��� ��������)
	void HumanCardDisplay();//����� �����, �������� (���������� � ����������� ������)
	void ChangeMoney(long int money); //����� ��������� �������
	long int GetMoneyBalance(); //����� ������ ������� (������)
	string GetName(); //����� ������ ����� ��������� (������)
	friend void CheatsMoneyBalance(Human& human); //������������� ������� - ��� �� ������
	Human& operator ++ (); //���������� ����������� ++
	Human operator ++ (int); //���������� ������������ ++
	friend ostream& operator << (ostream& out, Human human);//����� ���������� � ���������(���������� <<)
};

void CheatsMoneyBalance(Human& human); //��� �� ������