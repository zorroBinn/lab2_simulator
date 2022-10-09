#define _CRT_SECURE_NO_WARNINGS
#include "Human.h"
#include "Clothes.h"
#include <iostream>

Human HumanInit(int age, const char name[40], const char sex[20], Clothes clothes)
{
    Human human;
    human.Age = age;
    human.Moneybalance = 1000;
    strcpy(human.Name, name);
    strcpy(human.Sex, sex);
    human.clothes = clothes;
    return human;
}

void HumanRead(Clothes clothes)
{
    char strname[40], strsex[20];
    int age;
    printf("������� ���������� � ����� ���������:\n");
    do {
        printf("������� ��� ��������: ");
        gets_s(strname);
    } while (strname[0] == NULL);
    do {
        printf("������� ��� ���������: ");
        gets_s(strsex);
    } while (strsex[0] == NULL);
    do {
        printf("������� �������: ");
        scanf("%d", &age);
    } while (age < 0 || age > 120);
    ClothesRead();
    HumanInit(age, strname, strsex, clothes);
}

void HumanDisplay(Human human, Clothes clothes) {
    printf("��� ���������: %s\n������� ���������: %d\n��� ���������: %s\n������� ������: %d\n", human.Name, human.Age, human.Sex, human.Moneybalance);
    ClothesDisplay(clothes);
}
