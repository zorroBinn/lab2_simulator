#pragma once
#include "Human.h"
using namespace std;
//������ ���������
class Realty
{
	Human human; //��������
	string Housing, Vehicle;//�����, ������������ ��������

public:
	Realty();//����������� ��� ����������
	Realty(Human human, string housing, string vehicle);//����������� � �����������
	void RealtyRead(Human human);//���� ���������� �� ��������� � ����������
	void RealtyDisplay();//����� ���������� �� ���������
	void BuyNew(Human human);//����� ������� ������ ���������
};