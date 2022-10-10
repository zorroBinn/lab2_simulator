#define _CRT_SECURE_NO_WARNINGS
#include "Clothes.h"

#include <iostream>

Clothes ClothesInit(int conditions, const char body[20], const char pants[20], const char shoes[20])
{
    Clothes clothes;
    clothes.ClothesStatus = conditions;
    strcpy(clothes.Body, body);
    strcpy(clothes.Pants, pants);
    strcpy(clothes.Shoes, shoes);
    return clothes;
}

Clothes ClothesRead()
{
    Clothes clothes;
    int status;
    char strbody[20], strpants[20], strshoes[20];
    printf("������� ���������� �� ������ ������ ���������:\n");
    printf("����: ");
    do {
        gets_s(strbody);
    } while (strbody[0] == NULL);
    do {
        printf("�����: ");
        gets_s(strpants);
    } while (strpants[0] == NULL);
    do {
        printf("�����: ");
        gets_s(strshoes);
    } while (strshoes[0] == NULL);
    do {
        printf("������� ��������� ������ � ��������� (�� 0 �� 100): ");
        scanf("%d", &status);
    } while (status < 0 || status > 100);
    clothes.ClothesStatus = status;
    strcpy(clothes.Body, strbody);
    strcpy(clothes.Pants, strpants);
    strcpy(clothes.Shoes, strshoes);
    return clothes;
}

void ClothesDisplay(Clothes clothes)
{
    printf("������� ������: %s\n�����: %s\n�����: %s\n��������� ������: %d%%\n", clothes.Body, clothes.Pants, clothes.Shoes, clothes.ClothesStatus);
}

Clothes TearClothes(Clothes clothes)
{
    Clothes newclothes;
    int newstatus;
    if (clothes.ClothesStatus > 0) {
        printf("���� ������ ���������!\n");
        newstatus = clothes.ClothesStatus - 15;
        if (clothes.ClothesStatus < 0)
            clothes.ClothesStatus = 0;
        newclothes = clothes;
        newclothes.ClothesStatus = newstatus;
        return newclothes;
    }
}

Clothes SewUpClothes(Clothes clothes)
{
    int newstatus;
    Clothes newclothes;
    if (clothes.ClothesStatus > 0) {
        printf("�� �������� ���� ������!\n");
        newstatus = clothes.ClothesStatus + 20;
        if (clothes.ClothesStatus > 100)
            clothes.ClothesStatus = 100;
        newclothes = clothes;
        newclothes.ClothesStatus = newstatus;
        return newclothes;
    }
}


