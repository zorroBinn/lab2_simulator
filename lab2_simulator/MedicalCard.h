#pragma once
#include "Human.h"
using namespace std;
//������ ����������� ����� ���������
class MedicalCard
{
	Human human; //��������
	int Weight, Height; //��� � ����
	string HealthStatus; //������ �������� ���������

public:
	MedicalCard();//����������� ��� ����������
	MedicalCard(Human human, int weight, int height, string healthstatus);//����������� � �����������
	void MedicalCardRead(Human human);//���� ���������� � �������� � ����������
	void MedicalcardDisplay();//����� ���������� � ��������
	void BodyMassIndex();//����� �������� ������� ����� ���� ���������
	void SetHealthStatus(); //����� ��������� ������� ��������
};