#pragma once
#include "Human.h"
#include <String>
#include "Document.h"
using namespace std;
using std::string;
//����������� ����� - ����������� ����� ���������
class MedicalCard: public Document
{
protected:
	Human human; //��������
	int Weight, Height; //��� � ����
	string HealthStatus; //������ �������� ���������

public:
	MedicalCard();//����������� ��� ����������
	MedicalCard(Human human);//����������� � ����� ����������
	MedicalCard(Human human, int weight, int height, string healthstatus, int nomber);//����������� � �����������
	void MedicalCardRead(Human human);//���� ���������� � �������� � ����������
	void MedicalcardDisplay();//����� ���������� � ��������
	void BodyMassIndex();//����� �������� ������� ����� ���� ���������
	void BodyMassIndex(double* rez);//������� �������� ����� ���������
	void BodyMassIndex(double& rez);//������� �������� ����� ������
	void SetHealthStatus(); //����� ��������� ������� ��������
	friend void CheatsHealthStatus(MedicalCard& medicalcard);//������������� ������� - ��� �� ��������
	MedicalCard& operator= (Document& documen);
};

void CheatsHealthStatus(MedicalCard& medicalcard); //��� �� ��������