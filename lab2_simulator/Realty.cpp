#define _CRT_SECURE_NO_WARNINGS
#include "Realty.h"
#include "Human.h"
#include <iostream>
#include <conio.h>

Realty RealtyInit(const char housing[30], const char vehicle[30])
{
    Realty realty;
    strcpy(realty.Housing, housing);
    strcpy(realty.Vehicle, vehicle);
    return realty;
}

Realty RealtyRead()
{
    Realty realty;
    char strhousing[30] = "Гараж", strvehicle[30] = "Велосипед";
    printf("Начальное жильё: Гараж\nНачальное ТС: Велосипед");
    strcpy(realty.Housing, strhousing);
    strcpy(realty.Vehicle, strvehicle);
    return realty;
}

void RealtyDisplay(Realty realty)
{
    printf("Жильё: %s\nТранспортное средство: %s\n", realty.Housing, realty.Vehicle);
}

void BuyNew(Realty realty, Human &human)
{
    int choice, flag;
    char strbuynew[30];
    printf("Выберите для покупки:\n1 - Квартира(3 000 000р)\n2 - Коттедж(7 000 000р)\n3 - Вилла(20 000 000р)\n4 - Дворец(100 000 000р)\n5 - Мотоцикл(1 000 000)\n6 - Автомобиль(2 000 000)\n");
    do {
        flag = 0;
        choice = _getch();
        if (choice != '1') flag++;
        if (choice != '2') flag++;
        if (choice != '3') flag++;
        if (choice != '4') flag++;
    } while (flag == 4);
    flag = 0;
    switch (choice) {
    case '1': {
        if (human.Moneybalance > 3000000) {
            printf("Вы купили квартиру за 3 000 000р!");
            human.Moneybalance -= 3000000;
            strcpy(strbuynew, "Квартира");
            RealtyInit(strbuynew, realty.Vehicle);
        }
        else flag = 1;
        break;
    }
    case '2': {
        if (human.Moneybalance > 7000000) {
            printf("Вы купили коттедж за 7 000 000р!");
            human.Moneybalance -= 7000000;
            strcpy(strbuynew, "Коттедж");
            RealtyInit(strbuynew, realty.Vehicle);
        }
        else flag = 1;
        break;
    }
    case '3': {
        if (human.Moneybalance > 20000000) {
            printf("Вы купили виллу за 20 000 000р!");
            human.Moneybalance -= 20000000;
            strcpy(strbuynew, "Вилла");
            RealtyInit(strbuynew, realty.Vehicle);
        }
        else flag = 1;
        break;
    }
    case '4': {
        if (human.Moneybalance > 100000000) {
            printf("Вы купили Дворец за 100 000 000р!");
            human.Moneybalance -= 100000000;
            strcpy(strbuynew, "Дворец");
            RealtyInit(strbuynew, realty.Vehicle);
        }
        else flag = 1;
        break;
    }
    case '5': {
        if (human.Moneybalance > 1000000) {
            printf("Вы купили мотоцикл за 1 000 000р!");
            human.Moneybalance -= 1000000;
            strcpy(strbuynew, "Мотоцикл");
            RealtyInit(realty.Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    case '6': {
        if (human.Moneybalance > 2000000) {
            printf("Вы купили автомобиль за 2 000 000р!");
            human.Moneybalance -= 2000000;
            strcpy(strbuynew, "Автомобиль");
            RealtyInit(realty.Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    }
    if (flag)
        printf("Недостаточно денег");
}