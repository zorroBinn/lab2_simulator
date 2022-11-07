#pragma once
#include "Human.h"
#include <String>
using namespace std;
using std::string;
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
	void BodyMassIndex(double* rez);
	void BodyMassIndex(double& rez);
	void SetHealthStatus(); //����� ��������� ������� ��������
	friend void CheatsHealthStatus(MedicalCard& medicalcard);
};

void CheatsHealthStatus(MedicalCard& medicalcard);