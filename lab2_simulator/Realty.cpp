#include "Realty.h"
#include <iostream>
#include <conio.h>
#include <String>
using namespace std;

//����������� ��� ����������
Realty::Realty()
{
    this->Housing = "";
    this->Vehicle = "";
}

//����������� � ����� ����������
Realty::Realty(Human human)
{
    this->human = human;
}

//����������� � �����������
Realty::Realty(Human human, string housing, string vehicle)
{
	this->Housing = housing;
	this->Vehicle = vehicle;
    this->human = human;
}

//���� ���������� �� ��������� � ����������
void Realty::RealtyRead(Human human)
{
	string strhousing = "�����", strvehicle = "���������";
	cout << "\n��������� �����: " << strhousing << "\n��������� ��: " << strvehicle;
	this->Housing = strhousing;
	this->Vehicle = strvehicle;
    this->human = human;
}

//����� ���������� �� ���������
void Realty::RealtyDisplay()
{
    cout << "\n��������� ��������� " << human.HumanGetName() << ":\n�����: " << Housing << "\n������������ ��������: " << Vehicle << endl;
}

//����� ������� ������ ���������
void Realty::BuyNew(Human human)
{
    int choice, flag;
    string strbuynew;
    cout << "\n�������� ��� �������:\n1 - ��������(3 000 000�)\n2 - �������(7 000 000�)\n3 - �����(20 000 000�)\n4 - ������(100 000 000�)\n5 - ��������(1 000 000)\n6 - ����������(2 000 000)\n";
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
            cout << "�� ������ �������� �� 3 000 000�!";
            this->human.ChangeMoney(-3000000);
            strbuynew = "��������";
            this->Realty::Realty(human, strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '2': {
        if (human.MoneyBalanceDisplay() > 7000000) {
            cout << "�� ������ ������� �� 7 000 000�!";
            this->human.ChangeMoney(-7000000);
            strbuynew = "�������";
            this->Realty::Realty(human, strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '3': {
        if (human.MoneyBalanceDisplay() > 20000000) {
            cout << "�� ������ ����� �� 20 000 000�!";
            this->human.ChangeMoney(-20000000);
            strbuynew = "�����";
            this->Realty::Realty(human, strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '4': {
        if (human.MoneyBalanceDisplay() > 100000000) {
            cout << "�� ������ ������ �� 100 000 000�!";
            this->human.ChangeMoney(-100000000);
            strbuynew = "������";
            this->Realty::Realty(human, strbuynew, Vehicle);
        }
        else flag = 1;
        break;
    }
    case '5': {
        if (human.MoneyBalanceDisplay() > 1000000) {
            cout << "�� ������ �������� �� 1 000 000�!";
            this->human.ChangeMoney(-1000000);
            strbuynew = "��������";
            this->Realty::Realty(human, Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    case '6': {
        if (human.MoneyBalanceDisplay() > 2000000) {
            cout << "�� ������ ���������� �� 2 000 000�!";
            this->human.ChangeMoney(-2000000);
            strbuynew = "����������";
            this->Realty::Realty(human, Housing, strbuynew);
        }
        else flag = 1;
        break;
    }
    }
    if (flag)
        cout << "\n������������ ����� ��� �������\n";
}