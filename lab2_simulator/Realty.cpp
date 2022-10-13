#include "Realty.h"
#include <iostream>
#include <conio.h>

Realty::Realty()
{
    strcpy_s(this->Housing, "");
    strcpy_s(this->Vehicle, "");
}

Realty::Realty(const char housing[30], const char vehicle[30])
{
	strcpy_s(this->Housing, housing);
	strcpy_s(this->Vehicle, vehicle);
}

void Realty::RealtyRead()
{
	char strhousing[30] = "Гараж", strvehicle[30] = "Велосипед";
	std::cout << "\nНачальное жильё: " << strhousing << "\nНачальное ТО: " << strvehicle;
	strcpy_s(this->Housing, strhousing);
	strcpy_s(this->Vehicle, strvehicle);
}

void Realty::RealtyDisplay()
{
	std::cout << "\nЖильё: " << Housing << "\nТранспортное средство: " << Vehicle;
}

void Realty::BuyNew(Human human)
{
    int choice, flag;
    char strbuynew[30];
    std::cout << "\nВыберите для покупки:\n1 - Квартира(3 000 000р)\n2 - Коттедж(7 000 000р)\n3 - Вилла(20 000 000р)\n4 - Дворец(100 000 000р)\n5 - Мотоцикл(1 000 000)\n6 - Автомобиль(2 000 000)\n";
    do {
        flag = 0;
        choice = _getch();
        if (choice != '1') flag++;
        if (choice != '2') flag++;
        if (choice != '3') flag++;
        if (choice != '4') flag++;
        if (choice != '5') flag++;
        if (choice != '6') flag++;
    } while (flag == 6);
    flag = 0;
    switch (choice) {
    case '1': {
        if (human.MoneyBalanceDisplay() > 3000000) {
            std::cout << "Вы купили квартиру за 3 000 000р!";
            human.SpendMoney(3000000);
            strcpy_s(strbuynew, "Квартира");
            this->Realty::Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '2': {
        if (human.MoneyBalanceDisplay() > 7000000) {
            std::cout << "Вы купили коттедж за 7 000 000р!";
            human.SpendMoney(7000000);
            strcpy_s(strbuynew, "Коттедж");
            this->Realty::Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '3': {
        if (human.MoneyBalanceDisplay() > 20000000) {
            std::cout << "Вы купили виллу за 20 000 000р!";
            human.SpendMoney(20000000);
            strcpy_s(strbuynew, "Вилла");
            this->Realty::Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '4': {
        if (human.MoneyBalanceDisplay() > 100000000) {
            std::cout << "Вы купили Дворец за 100 000 000р!";
            human.SpendMoney(100000000);
            strcpy_s(strbuynew, "Дворец");
            this->Realty::Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '5': {
        if (human.MoneyBalanceDisplay() > 1000000) {
            std::cout << "Вы купили мотоцикл за 1 000 000р!";
            human.SpendMoney(1000000);
            strcpy_s(strbuynew, "Мотоцикл");
            this->Realty::Realty(Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    case '6': {
        if (human.MoneyBalanceDisplay() > 2000000) {
            std::cout << "Вы купили автомобиль за 2 000 000р!";
            human.SpendMoney(2000000);
            strcpy_s(strbuynew, "Автомобиль");
            this->Realty::Realty(Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    }
    if (flag)
        std::cout << "\nНедостаточно денег для покупки\n";
}
