#define _CRT_SECURE_NO_WARNINGS
#include "MedicalCard.h"
#include <iostream>
#include "Human.h"
//Инициализация медкарты
MedicalCard MedicalCardInit(Human human, int weight, int height, const char healthstatus[25])
{
    MedicalCard medicalcard;
    medicalcard.human = human;
    medicalcard.Weight = weight;
    medicalcard.Height = height;
    strcpy(medicalcard.HealthStatus, healthstatus);
    return medicalcard;
}
//Заполнение информации медицинской карты с клавиатуры
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
    printf("Укажите состояние здоровья персонажа: ");
    do {
        gets_s(strhealthstatus);
    } while (strhealthstatus[0] == NULL);
    medicalcard.human = human;
    medicalcard.Weight = weight;
    medicalcard.Height = height;
    strcpy(medicalcard.HealthStatus, strhealthstatus);
    return medicalcard;
}
//Вывод информации медицинской карты
void MedicalcardDisplay(MedicalCard medicalcard)
{
    printf("Имя персонажа: %s\nВозраст персонажа: %d\nПол персонажа: %s\nРост: %d см\nВес : %d кг\nСтатус здоровья персонажа: %s\n", medicalcard.human.Name, medicalcard.human.Age, medicalcard.human.Sex, medicalcard.Height, medicalcard.Weight, medicalcard.HealthStatus);
}
//Функция рассчёта индекса массы тела персонажа
void BodyMassIndex(MedicalCard medicalcard) {
    double Index, Weight, Height;
    if (medicalcard.Height > 0 && medicalcard.Weight > 0) {
        Weight = medicalcard.Weight;
        Height = medicalcard.Height;
        Index = Weight / (Height * Height/10000);
        if (Index > 18.5 && Index < 25.0)
            printf("\nУ %s нормальный вес, ИМТ=%.2f", medicalcard.human.Name, Index);
        else if (Index <= 18.5)
            printf("\nУ %s недостаток веса, ИМТ=%.2f", medicalcard.human.Name, Index);
        else
            printf("\nУ %s избыточный вес, ИМТ=%.2f", medicalcard.human.Name, Index);
    }
}
//Функция изменения статуса здоровья персонажа
void SetHealthStatus(MedicalCard &medicalcard)
{
    if (medicalcard.HealthStatus != NULL) {
        printf("Текущее состояние: %s\nВведите новое состояние: \n", medicalcard.HealthStatus);
        do {
            gets_s(medicalcard.HealthStatus);
        } while (medicalcard.HealthStatus[0] == NULL);
    }
}