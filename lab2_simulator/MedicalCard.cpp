#include "MedicalCard.h"
#include <iostream>
#include <String>

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
    int weight, height, nom;
    string strstatus, strweight, strheight, strnom;
    while (!correctinput) {
        try
        {
            cout << "������� ���� ��������� � ��: " << endl;
            cin >> strheight;
            cout << "������� ��� ��������� � ��: " << endl;;
            cin >> strweight;
            weight = stoi(strweight);
            height = stoi(strheight);
            if (weight < 2 || weight >550) {
                throw "������������ ���� ����";
            }
            if (height < 30 || height > 300) {
                throw height;
            }
            correctinput = 1;
        }
        catch (invalid_argument & ex)
        {
            cout << "������������ ���� ���� �/��� ����� ���������" << endl;
        }
        catch (const string ex) 
        {
            cout << ex << endl;
        }
        catch (const int ex)
        {
            cout << "��� ��� ���� �� ����� ���� ����� " << ex << endl;
        }
        cin.ignore(1024, '\n');
    }
    while (correctinput) {
        try
        {
            cout << "������� ������ �������� ���������: " << endl;
            getline(cin, strstatus);
            correctinput = 0;
        }
        catch (const exception&)
        {
            cout << "������������ ���� ��������� ��������" << endl;
        }
    }/*
    while (!correctinput) {
        try {
            cout << "������ ����������� ����� ���������: " << endl;
            cin >> strnom;
            nom = stoi(strnom);
            if (nom < 10000 || nom > 99999)
                throw nom;
            correctinput = 1;
        }
        catch (invalid_argument& ex) {
            cout << "������������ ���� ������ ���������" << endl;
        }
        catch (const int ex) {
            cout << "����� ��������� �� ����� ���� �����" << ex << endl;
        }
        cin.ignore(1024, '\n');
    }*/
    this->human = human;
    this->HealthStatus = strstatus;
    this->Weight = weight;
    this->Height = height;
}

//����� ���������� � ��������
void MedicalCard::MedicalcardDisplay()
{
    cout << "����������� ����� ����� " << nomber << ":" << endl;
    human.HumanNameSexAgeDisplay();
    cout << "����: " << Height << "\n���: " << Weight << "\n������ ��������: " << HealthStatus << endl;;
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
            cout << "���������� ���, ��� = " << Index << endl;
        else if (Index <= 18.5)
            cout << "���������� ����, ��� = " << Index << endl;
        else
            cout << "���������� ���, ��� = " << Index << endl;;
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
            getline(cin, strstatus);
            correctinput = 1;
        }
        catch (const exception&)
        {
            cout << "������������ ���� ��������� ��������" << endl;
        }
    }
}

MedicalCard& MedicalCard::operator= (Document& document)
{
    try {
        if (this->Weight == 0 || this->Height == 0) {
            throw "���������� ��������� ����� ���������, �.�. �������� ��� �� ������";
        }
        this->nomber = document.GetNomber();
        return *this;
    }
    catch (string ex) {
        cout << ex << endl;
    }
}

//��� �� ��������
void CheatsHealthStatus(MedicalCard& medicalcard)
{
    cout << "\n����������� ���, ������ �������� - ������!" << endl;
    medicalcard.HealthStatus = "������";
}
