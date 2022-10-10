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
    char strhousing[30] = "�����", strvehicle[30] = "���������";
    printf("��������� �����: �����\n��������� ��: ���������");
    strcpy(realty.Housing, strhousing);
    strcpy(realty.Vehicle, strvehicle);
    return realty;
}

void RealtyDisplay(Realty realty)
{
    printf("�����: %s\n������������ ��������: %s\n", realty.Housing, realty.Vehicle);
}

void BuyNew(Realty realty, Human &human)
{
    int choice, flag;
    char strbuynew[30];
    printf("�������� ��� �������:\n1 - ��������(3 000 000�)\n2 - �������(7 000 000�)\n3 - �����(20 000 000�)\n4 - ������(100 000 000�)\n5 - ��������(1 000 000)\n6 - ����������(2 000 000)\n");
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
            printf("�� ������ �������� �� 3 000 000�!");
            human.Moneybalance -= 3000000;
            strcpy(strbuynew, "��������");
            RealtyInit(strbuynew, realty.Vehicle);
        }
        else flag = 1;
        break;
    }
    case '2': {
        if (human.Moneybalance > 7000000) {
            printf("�� ������ ������� �� 7 000 000�!");
            human.Moneybalance -= 7000000;
            strcpy(strbuynew, "�������");
            RealtyInit(strbuynew, realty.Vehicle);
        }
        else flag = 1;
        break;
    }
    case '3': {
        if (human.Moneybalance > 20000000) {
            printf("�� ������ ����� �� 20 000 000�!");
            human.Moneybalance -= 20000000;
            strcpy(strbuynew, "�����");
            RealtyInit(strbuynew, realty.Vehicle);
        }
        else flag = 1;
        break;
    }
    case '4': {
        if (human.Moneybalance > 100000000) {
            printf("�� ������ ������ �� 100 000 000�!");
            human.Moneybalance -= 100000000;
            strcpy(strbuynew, "������");
            RealtyInit(strbuynew, realty.Vehicle);
        }
        else flag = 1;
        break;
    }
    case '5': {
        if (human.Moneybalance > 1000000) {
            printf("�� ������ �������� �� 1 000 000�!");
            human.Moneybalance -= 1000000;
            strcpy(strbuynew, "��������");
            RealtyInit(realty.Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    case '6': {
        if (human.Moneybalance > 2000000) {
            printf("�� ������ ���������� �� 2 000 000�!");
            human.Moneybalance -= 2000000;
            strcpy(strbuynew, "����������");
            RealtyInit(realty.Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    }
    if (flag)
        printf("������������ �����");
}