#pragma once
#include <String>
#include "Human.h"
using namespace std;
using std::string;
//������ ���������
class Realty
{
protected:
	Human human; //��������
	string Housing, Vehicle;//�����, ������������ ��������

public:
	Realty();//����������� ��� ����������
	Realty(Human human);//����������� � ����� ����������
	Realty(Human human, string housing, string vehicle);//����������� � �����������
	void RealtyRead(Human human);//���� ���������� �� ��������� � ����������
	void BuyNew(Human human);//����� ������� ������ ���������
	friend ostream& operator << (ostream& out, Realty realty);//����� ���������� �� ���������(���������� <<)
};