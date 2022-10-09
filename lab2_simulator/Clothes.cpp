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

void ClothesRead()
{
    int status;
    char strbody[20], strpants[20], strshoes[20];
    printf("Введите информацию об одежде своего персонажа:\n");
    do {
        printf("Верхняя одежда: ");
        gets_s(strbody);
    } while (strbody[0] == NULL);
    do {
        printf("Штаны: ");
        gets_s(strpants);
    } while (strpants[0] == NULL);
    do {
        printf("Обувь: ");
        gets_s(strshoes);
    } while (strshoes[0] == NULL);
    do {
        printf("Укажите состояние одежды в процентах (от 0 до 100): ");
        scanf("%d", &status);
    } while (status < 0 || status > 100);
    ClothesInit(status, strbody, strpants, strshoes);
}

void ClothesDisplay(Clothes clothes)
{
    printf("Верхняя одежда: %s\nШтаны: %s\nОбувь: %s\nСостояние одежды: %d%%\n", clothes.Body, clothes.Pants, clothes.Shoes, clothes.ClothesStatus);
}

void TearClothes(Clothes clothes)
{
    if (clothes.ClothesStatus > 0) {
        printf("Ваша одежда порвалась!");
        clothes.ClothesStatus -= 15;
        if (clothes.ClothesStatus < 0)
            clothes.ClothesStatus = 0;
    }
}

void SewUpClothes(Clothes clothes)
{
    if (clothes.ClothesStatus > 0) {
        printf("Вы починили вашу одежду!");
        clothes.ClothesStatus += 20;
        if (clothes.ClothesStatus > 100)
            clothes.ClothesStatus = 100;
    }
}


