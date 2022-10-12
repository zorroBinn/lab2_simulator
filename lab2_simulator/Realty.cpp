#include "Realty.h"
#include <iostream>
#include <conio.h>

Realty::Realty()
{
}

Realty::Realty(const char housing[30], const char vehicle[30])
{
	strcpy(this->Housing, housing);
	strcpy(this->Vehicle, vehicle);
}

void Realty::RealtyRead()
{
	char strhousing[30] = "Гараж", strvehicle[30] = "Велосипед";
	std::cout << "\nНачальное жильё: " << strhousing << "\nНачальное ТО: " << strvehicle;
	strcpy(this->Housing, strhousing);
	strcpy(this->Vehicle, strvehicle);
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
    } while (flag == 4);
    flag = 0;
    switch (choice) {
    case '1': {
        if (human.Moneybalance > 3000000) {
            std::cout << "Вы купили квартиру за 3 000 000р!";
            human.Moneybalance -= 3000000;
            strcpy(strbuynew, "Квартира");
            Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '2': {
        if (human.Moneybalance > 7000000) {
            std::cout << "Вы купили коттедж за 7 000 000р!";
            human.Moneybalance -= 7000000;
            strcpy(strbuynew, "Коттедж");
            Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '3': {
        if (human.Moneybalance > 20000000) {
            std::cout << "Вы купили виллу за 20 000 000р!";
            human.Moneybalance -= 20000000;
            strcpy(strbuynew, "Вилла");
            Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '4': {
        if (human.Moneybalance > 100000000) {
            std::cout << "Вы купили Дворец за 100 000 000р!";
            human.Moneybalance -= 100000000;
            strcpy(strbuynew, "Дворец");
            Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '5': {
        if (human.Moneybalance > 1000000) {
            std::cout << "Вы купили мотоцикл за 1 000 000р!";
            human.Moneybalance -= 1000000;
            strcpy(strbuynew, "Мотоцикл");
            Realty(Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    case '6': {
        if (human.Moneybalance > 2000000) {
            std::cout << "Вы купили автомобиль за 2 000 000р!";
            human.Moneybalance -= 2000000;
            strcpy(strbuynew, "Автомобиль");
            Realty(Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    }
    if (flag)
        std::cout << "\nНедостаточно денег для покупки\n";
}
