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
	Human(Clothes clothes);
	Human(int age, string name, string sex, Clothes clothes);//����������� � �����������
	void HumanRead(); //���� ���������� � ��������� � ����������
	void HumanDisplay(); //����� ���������� � ���������
	void HumanNameSexAgeDisplay(); //����� �����, ����, �������� (��� ��������)
	void ChangeMoney(long int money); //����� ��������� �������
	long int MoneyBalanceDisplay(); //����� ������ ������� (������)
	string HumanGetName(); //����� ������ ����� ��������� (������)
	friend void CheatsMoneyBalance(Human& human); //������������� ������� - ��� �� ������
	Human& operator ++ (); //���������� ����������� ++
	Human operator ++ (int); //���������� ������������ ++
};

void CheatsMoneyBalance(Human& human); //��� �� ������