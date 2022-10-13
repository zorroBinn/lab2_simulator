#include "MedicalCard.h"
#include <iostream>
//����������� ��� ����������
MedicalCard::MedicalCard()
{
    this->Weight = 0;
    this->Height = 0;
    strcpy_s(this->HealthStatus, "");
    this->human = Human();
}
//����������� � �����������
MedicalCard::MedicalCard(Human human, int weight, int height, const char healthstatus[25])
{
	this->Weight = weight;
	this->Height = height;
	strcpy_s(this->HealthStatus, healthstatus);
	this->human = human;
}
//���� ���������� � �������� � ����������
void MedicalCard::MedicalCardRead(Human human)
{
    int weight, height;
    char strstatus[25];
    std::cout << "\n������� ���� ��������� � ��: ";
    std::cin >> height;
    std::cout << "\n������� ��� ��������� � ��: ";
    std::cin >> weight;
    std::cout << "\n������� ������ �������� ���������: ";
    std::cin >> strstatus;
    this->human = human;
    strcpy_s(this->HealthStatus, strstatus);
    this->Weight = weight;
    this->Height = height;
}
//����� ���������� � ��������
void MedicalCard::MedicalcardDisplay()
{
    human.HumanNameSexAgeDisplay();
    std::cout << "\n����: " << Height << "\n���: " << Weight << "\n������ ��������: " << HealthStatus;
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
            std::cout << "���������� ���, ��� = " << Index;
        else if (Index <= 18.5)
            std::cout << "���������� ����, ��� = " << Index;
        else
            std::cout << "���������� ���, ��� = " << Index;
    }
}
//����� ��������� ������� ��������
void MedicalCard::SetHealthStatus()
{
    if (HealthStatus != NULL) {
        std::cout << "\n������� ������ ��������: " << HealthStatus << "\n������� ����� ������ ��������: ";
        do {
            std::cin >> HealthStatus;
        } while (HealthStatus[0] == NULL);
    }
}