#pragma once
#include "Human.h"
//������ ���������
class Realty
{
	Human human; //��������
	char Housing[30], Vehicle[30];//�����, ������������ ��������

public:
	Realty();//����������� ��� ����������
	Realty(Human human, const char housing[30], const char vehicle[30]);//����������� � �����������
	void RealtyRead(Human human);//���� ���������� �� ��������� � ����������
	void RealtyDisplay();//����� ���������� �� ���������
	void BuyNew(Human human);//����� ������� ������ ���������
};