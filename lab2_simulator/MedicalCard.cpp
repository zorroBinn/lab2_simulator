#define _CRT_SECURE_NO_WARNINGS
#include "MedicalCard.h"
#include <iostream>
#include "Human.h"
//������������� ��������
MedicalCard MedicalCardInit(Human human, int weight, int height, const char healthstatus[25])
{
    MedicalCard medicalcard;
    medicalcard.human = human;
    medicalcard.Weight = weight;
    medicalcard.Height = height;
    strcpy(medicalcard.HealthStatus, healthstatus);
    return medicalcard;
}
//���������� ���������� ����������� ����� � ����������
MedicalCard MedicalCardRead(Human human)
{
    MedicalCard medicalcard;
    int height, weight;
    char strhealthstatus[25];
    printf("��������� ����������� ����� ������ ���������:\n");
    do {
        printf("������� ���� � �����������: ");
        scanf("%d", &height);
    } while (height > 250 || height < 3);
    do {
        printf("������� ��� � �����������: ");
        scanf("%d", &weight);
    } while (weight > 550 || weight < 3);
    printf("������� ��������� �������� ���������: ");
    do {
        gets_s(strhealthstatus);
    } while (strhealthstatus[0] == NULL);
    medicalcard.human = human;
    medicalcard.Weight = weight;
    medicalcard.Height = height;
    strcpy(medicalcard.HealthStatus, strhealthstatus);
    return medicalcard;
}
//����� ���������� ����������� �����
void MedicalcardDisplay(MedicalCard medicalcard)
{
    printf("��� ���������: %s\n������� ���������: %d\n��� ���������: %s\n����: %d ��\n��� : %d ��\n������ �������� ���������: %s\n", medicalcard.human.Name, medicalcard.human.Age, medicalcard.human.Sex, medicalcard.Height, medicalcard.Weight, medicalcard.HealthStatus);
}
//������� �������� ������� ����� ���� ���������
void BodyMassIndex(MedicalCard medicalcard) {
    double Index, Weight, Height;
    if (medicalcard.Height > 0 && medicalcard.Weight > 0) {
        Weight = medicalcard.Weight;
        Height = medicalcard.Height;
        Index = Weight / (Height * Height/10000);
        if (Index > 18.5 && Index < 25.0)
            printf("\n� %s ���������� ���, ���=%.2f", medicalcard.human.Name, Index);
        else if (Index <= 18.5)
            printf("\n� %s ���������� ����, ���=%.2f", medicalcard.human.Name, Index);
        else
            printf("\n� %s ���������� ���, ���=%.2f", medicalcard.human.Name, Index);
    }
}
//������� ��������� ������� �������� ���������
void SetHealthStatus(MedicalCard &medicalcard)
{
    if (medicalcard.HealthStatus != NULL) {
        printf("������� ���������: %s\n������� ����� ���������: \n", medicalcard.HealthStatus);
        do {
            gets_s(medicalcard.HealthStatus);
        } while (medicalcard.HealthStatus[0] == NULL);
    }
}