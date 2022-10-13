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
	char strhousing[30] = "�����", strvehicle[30] = "���������";
	std::cout << "\n��������� �����: " << strhousing << "\n��������� ��: " << strvehicle;
	strcpy_s(this->Housing, strhousing);
	strcpy_s(this->Vehicle, strvehicle);
}

void Realty::RealtyDisplay()
{
	std::cout << "\n�����: " << Housing << "\n������������ ��������: " << Vehicle;
}

void Realty::BuyNew(Human human)
{
    int choice, flag;
    char strbuynew[30];
    std::cout << "\n�������� ��� �������:\n1 - ��������(3 000 000�)\n2 - �������(7 000 000�)\n3 - �����(20 000 000�)\n4 - ������(100 000 000�)\n5 - ��������(1 000 000)\n6 - ����������(2 000 000)\n";
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
            std::cout << "�� ������ �������� �� 3 000 000�!";
            human.Moneybalance -= 3000000;
            strcpy_s(strbuynew, "��������");
            this->Realty::Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '2': {
        if (human.Moneybalance > 7000000) {
            std::cout << "�� ������ ������� �� 7 000 000�!";
            human.Moneybalance -= 7000000;
            strcpy_s(strbuynew, "�������");
            this->Realty::Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '3': {
        if (human.Moneybalance > 20000000) {
            std::cout << "�� ������ ����� �� 20 000 000�!";
            human.Moneybalance -= 20000000;
            strcpy_s(strbuynew, "�����");
            this->Realty::Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '4': {
        if (human.Moneybalance > 100000000) {
            std::cout << "�� ������ ������ �� 100 000 000�!";
            human.Moneybalance -= 100000000;
            strcpy_s(strbuynew, "������");
            this->Realty::Realty(strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '5': {
        if (human.Moneybalance > 1000000) {
            std::cout << "�� ������ �������� �� 1 000 000�!";
            human.Moneybalance -= 1000000;
            strcpy_s(strbuynew, "��������");
            this->Realty::Realty(Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    case '6': {
        if (human.Moneybalance > 2000000) {
            std::cout << "�� ������ ���������� �� 2 000 000�!";
            human.Moneybalance -= 2000000;
            strcpy_s(strbuynew, "����������");
            this->Realty::Realty(Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    }
    if (flag)
        std::cout << "\n������������ ����� ��� �������\n";
}
