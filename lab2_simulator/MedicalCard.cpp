#define _CRT_SECURE_NO_WARNINGS
#include "MedicalCard.h"
#include <iostream>
#include "Human.h"

MedicalCard MedicalCardInit(Human human, int weight, int height, const char healthstatus[25])
{
    MedicalCard medicalcard;
    medicalcard.human = human;
    medicalcard.Weight = weight;
    medicalcard.Height = height;
    strcpy(medicalcard.HealthStatus, healthstatus);
    return medicalcard;
}

MedicalCard MedicalCardRead(Human human)
{
    MedicalCard medicalcard;
    int height, weight;
    char strhealthstatus[25];
    printf("Заполните медицинскую карту своего персонажа:\n");
    do {
        printf("Введите рост в сантиметрах: ");
        scanf("%d", &height);
    } while (height > 250 || height < 3);
    do {
        printf("Введите вес в килограммах: ");
        scanf("%d", &weight);
    } while (weight > 550 || weight < 3);
    do {
        printf("Укажите состояние здоровья персонажа: ");
        gets_s(strhealthstatus);
    } while (strhealthstatus[0] == NULL);
    medicalcard.human = human;
    medicalcard.Weight = weight;
    medicalcard.Height = height;
    strcpy(medicalcard.HealthStatus, strhealthstatus);
    return medicalcard;
}

void MedicalcardDisplay(MedicalCard medicalcard)
{
    printf("Имя персонажа: %s\nВозраст персонажа: %d\nПол персонажа: %s\nРост: %d см\nВес : %d кг\nСтатус здоровья персонажа: %s\n", medicalcard.human.Name, medicalcard.human.Age, medicalcard.human.Sex, medicalcard.Height, medicalcard.Weight, medicalcard.HealthStatus);
}

void BodyMassIndex(MedicalCard medicalcard) {
    double Index;
    if (medicalcard.Height > 0 && medicalcard.Weight > 0) {
        Index = medicalcard.Weight / (medicalcard.Height * medicalcard.Height / 1000);
        if (Index > 18.5 && Index < 25.0)
            printf("У %s нормальный вес", medicalcard.human.Name);
        else if (Index <= 18.5)
            printf("У %s недостаток веса", medicalcard.human.Name);
        else
            printf("У %s избыточный вес", medicalcard.human.Name);
    }
}

void SetHealthStatus(MedicalCard medicalcard)
{
    char strhealthstatus[25];
    if (medicalcard.HealthStatus != NULL) {
        printf("Текущее состояние: %s\nВведите новое состояние: \n", medicalcard.HealthStatus);
        do {
            gets_s(strhealthstatus);
        } while (strhealthstatus[0] == NULL);
    }
    
}