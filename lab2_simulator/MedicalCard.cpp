#define _CRT_SECURE_NO_WARNINGS
#include "MedicalCard.h"
#include <iostream>
#include "Human.h"

MedicalCard MedicalCardInit(Human human, double weight, double height, const char healthstatus[25])
{
    MedicalCard medicalcard;
    medicalcard.human = human;
    medicalcard.Weight = weight;
    medicalcard.Height = height;
    strcpy(medicalcard.HealthStatus, healthstatus);
    return medicalcard;
}

void MedicalCardRead(Human human)
{
    double height, weight;
    char strhealthstatus[25];
    printf("��������� ����������� ����� ������ ���������:\n");
    do {
        printf("������� ���� � ������: ");
        scanf("%f", &height);
    } while (height > 2.50 || height < 0.3);
    do {
        printf("������� ��� � �����������: ");
        scanf("%f", &weight);
    } while (weight > 550.0 || weight < 2.5);
    do {
        printf("������� ��������� �������� ���������: ");
        gets_s(strhealthstatus);
    } while (strhealthstatus[0] == NULL);
    MedicalCardInit(human, weight, height, strhealthstatus);
}

void MedicalcardDisplay(MedicalCard medicalcard)
{
    printf("��� ���������: %s\n������� ���������: %d\n��� ���������: %s\n����: % f\n��� : % f\n������ �������� ���������: %s\n", medicalcard.human.Name, medicalcard.human.Age, medicalcard.human.Sex, medicalcard.Height, medicalcard.Weight, medicalcard.HealthStatus);
}

void BodyMassIndex(MedicalCard medicalcard) {
    double Index;
    if (medicalcard.Height > 0 && medicalcard.Weight > 0) {
        Index = medicalcard.Weight / (medicalcard.Height * medicalcard.Height);
        if (Index > 18.5 && Index < 25.0)
            printf("� %s ���������� ���", medicalcard.human.Name);
        else if (Index <= 18.5)
            printf("� %s ���������� ����", medicalcard.human.Name);
        else
            printf("� %s ���������� ���", medicalcard.human.Name);
    }
}

void SetHealthStatus(MedicalCard medicalcard)
{
    char strhealthstatus[25];
    if (medicalcard.HealthStatus != NULL) {
        printf("������� ���������: %s\n������� ����� ���������: ");
        do {
            gets_s(strhealthstatus);
        } while (strhealthstatus[0] == NULL);
    }
}