#include "MedicalCard.h"
#include <iostream>
#include <String>
#include <regex>
using namespace std;

//����������� ��� ����������
MedicalCard::MedicalCard()
{
    this->Weight = 0;
    this->Height = 0;
    this->HealthStatus = "";
}

//����������� � ����� ����������
MedicalCard::MedicalCard(Human human)
{
    this->human = human;
}

//����������� � �����������
MedicalCard::MedicalCard(Human human, int weight, int height, string healthstatus)
{
	this->Weight = weight;
	this->Height = height;
	this->HealthStatus = healthstatus;
	this->human = human;
}

//���� ���������� � �������� � ����������
void MedicalCard::MedicalCardRead(Human human)
{
    bool correctinput = 0;
    int weight, height;
    string strstatus, strweight, strheight;
    while (!correctinput) {
        try
        {
            cout << "\n������� ���� ��������� � ��: ";
            cin >> strheight;
            cout << "\n������� ��� ��������� � ��: ";
            cin >> strweight;
            weight = stoi(strweight);
            height = stoi(strheight);
            correctinput = 1;
        }
        catch (invalid_argument & ex)
        {
            cout << "������������ ���� ���� �/��� ����� ���������" << endl;
        }
    }
    while (correctinput) {
        try
        {
            cout << "\n������� ������ �������� ���������: ";
            cin >> strstatus;
            strstatus = regex_replace(strstatus, regex("^ +| +$|( ) +"), "$1");
            if (strstatus == "") {
                throw "������ ����� ��������� ��������";
            }
            correctinput = 0;
        }
        catch (const string ex)
        {
            cout << ex << endl;
        }
    }
    this->human = human;
    this->HealthStatus = strstatus;
    this->Weight = weight;
    this->Height = height;
}

//����� ���������� � ��������
void MedicalCard::MedicalcardDisplay()
{
    human.HumanNameSexAgeDisplay();
    cout << "\n����: " << Height << "\n���: " << Weight << "\n������ ��������: " << HealthStatus << endl;;
}

//����� �������� ������� ����� ���� ���������
void MedicalCard::BodyMassIndex()
{
    double Index, weight, height;
    if (Height > 0 && Weight > 0) {
        weight = Weight;
        height = Height;
        Index = weight / (height * height / 10000);
        if (Index > 18.5 && Index < 25.0)
            cout << "���������� ���, ��� = " << Index;
        else if (Index <= 18.5)
            cout << "���������� ����, ��� = " << Index;
        else
            cout << "���������� ���, ��� = " << Index;
    }
}

//������� �������� ����� ���������
void MedicalCard::BodyMassIndex(double* rez)
{
    double weight, height;
    weight = Weight;
    height = Height;
    *rez = weight / (height * height / 10000);
}

//������� �������� ����� ������
void MedicalCard::BodyMassIndex(double& rez)
{
    double weight, height;
    weight = Weight;
    height = Height;
    rez = weight / (height * height / 10000);
}

//����� ��������� ������� ��������
void MedicalCard::SetHealthStatus()
{
    bool correctinput = 0;
    string strstatus;
    cout << "\n������� ������ ��������: " << HealthStatus << "\n������� ����� ������ ��������: ";
    while (!correctinput) {
        try
        {
            cin >> strstatus;
            strstatus = regex_replace(strstatus, regex("^ +| +$|( ) +"), "$1");
            if (strstatus == "") {
                throw "������ ����� ��������� ��������";
            }
            correctinput = 1;
        }
        catch (const string ex)
        {
            cout << ex << endl;
        }
    }
}

//��� �� ��������
void CheatsHealthStatus(MedicalCard& medicalcard)
{
    cout << "\n����������� ���, ������ �������� - ������!" << endl;
    medicalcard.HealthStatus = "������";
}
