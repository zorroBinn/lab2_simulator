#include "Realty.h"
#include <iostream>
#include <conio.h>
#include <String>
using namespace std;

//Конструктор без параметров
Realty::Realty()
{
    this->Housing = "";
    this->Vehicle = "";
}

//конструктор с одним параметром
Realty::Realty(Human human)
{
    this->human = human;
}

//Конструктор с параметрами
Realty::Realty(Human human, string housing, string vehicle)
{
	this->Housing = housing;
	this->Vehicle = vehicle;
    this->human = human;
}

//Ввод информации об имуществе с клавиатуры
void Realty::RealtyRead(Human human)
{
	string strhousing = "Гараж", strvehicle = "Велосипед";
	cout << "\nНачальное жильё: " << strhousing << "\nНачальное ТО: " << strvehicle;
	this->Housing = strhousing;
	this->Vehicle = strvehicle;
    this->human = human;
}

//Вывод информации об имуществе
void Realty::RealtyDisplay()
{
    cout << "\nИмущество персонажа " << human.HumanGetName() << ":\nЖильё: " << Housing << "\nТранспортное средство: " << Vehicle << endl;
}

//Метод покупки нового имущества
void Realty::BuyNew(Human human)
{
    int choice, flag;
    string strbuynew;
    cout << "\nВыберите для покупки:\n1 - Квартира(3 000 000р)\n2 - Коттедж(7 000 000р)\n3 - Вилла(20 000 000р)\n4 - Дворец(100 000 000р)\n5 - Мотоцикл(1 000 000)\n6 - Автомобиль(2 000 000)\n";
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
            cout << "Вы купили квартиру за 3 000 000р!";
            this->human.ChangeMoney(-3000000);
            strbuynew = "Квартира";
            this->Realty::Realty(human, strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '2': {
        if (human.MoneyBalanceDisplay() > 7000000) {
            cout << "Вы купили коттедж за 7 000 000р!";
            this->human.ChangeMoney(-7000000);
            strbuynew = "Коттедж";
            this->Realty::Realty(human, strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '3': {
        if (human.MoneyBalanceDisplay() > 20000000) {
            cout << "Вы купили виллу за 20 000 000р!";
            this->human.ChangeMoney(-20000000);
            strbuynew = "Вилла";
            this->Realty::Realty(human, strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '4': {
        if (human.MoneyBalanceDisplay() > 100000000) {
            cout << "Вы купили Дворец за 100 000 000р!";
            this->human.ChangeMoney(-100000000);
            strbuynew = "Дворец";
            this->Realty::Realty(human, strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '5': {
        if (human.MoneyBalanceDisplay() > 1000000) {
            cout << "Вы купили мотоцикл за 1 000 000р!";
            this->human.ChangeMoney(-1000000);
            strbuynew = "Мотоцикл";
            this->Realty::Realty(human, Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    case '6': {
        if (human.MoneyBalanceDisplay() > 2000000) {
            cout << "Вы купили автомобиль за 2 000 000р!";
            this->human.ChangeMoney(-2000000);
            strbuynew = "Автомобиль";
            this->Realty::Realty(human, Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    }
    if (flag)
        cout << "\nНедостаточно денег для покупки\n";
}