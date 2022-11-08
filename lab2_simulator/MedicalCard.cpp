#include "MedicalCard.h"
#include <iostream>
#include <String>
using namespace std;

//Конструктор без параметров
MedicalCard::MedicalCard()
{
    this->Weight = 0;
    this->Height = 0;
    this->HealthStatus = "";
}

//конструктор с одним параметром
MedicalCard::MedicalCard(Human human)
{
    this->human = human;
}

//Конструктор с параметрами
MedicalCard::MedicalCard(Human human, int weight, int height, string healthstatus)
{
	this->Weight = weight;
	this->Height = height;
	this->HealthStatus = healthstatus;
	this->human = human;
}

//Ввод информации о медкарте с клавиатуры
void MedicalCard::MedicalCardRead(Human human)
{
    int weight, height;
    string strstatus;
    cout << "\nвведите рост персонажа в см: ";
    cin >> height;
    cout << "\nвведите вес персонажа в кг: ";
    cin >> weight;
    cout << "\nУкажите статус здоровья персонажа: ";
    cin >> strstatus;
    this->human = human;
    this->HealthStatus = strstatus;
    this->Weight = weight;
    this->Height = height;
}

//Вывод информации о медкарте
void MedicalCard::MedicalcardDisplay()
{
    human.HumanNameSexAgeDisplay();
    cout << "\nРост: " << Height << "\nВес: " << Weight << "\nСтатус здоровья: " << HealthStatus << endl;;
}

//Метод рассчёта индекса массы тела персонажа
void MedicalCard::BodyMassIndex()
{
    double Index, weight, height;
    if (Height > 0 && Weight > 0) {
        weight = Weight;
        height = Height;
        Index = weight / (height * height / 10000);
        if (Index > 18.5 && Index < 25.0)
            cout << "Нормальный вес, ИМТ = " << Index;
        else if (Index <= 18.5)
            cout << "Дефицитный веса, ИМТ = " << Index;
        else
            cout << "Избыточный вес, ИМТ = " << Index;
    }
}

//Возврат значения через указатель
void MedicalCard::BodyMassIndex(double* rez)
{
    double weight, height;
    weight = Weight;
    height = Height;
    *rez = weight / (height * height / 10000);
}

//Возврат значения через ссылку
void MedicalCard::BodyMassIndex(double& rez)
{
    double weight, height;
    weight = Weight;
    height = Height;
    rez = weight / (height * height / 10000);
}

//Метод изменения статуса здоровья
void MedicalCard::SetHealthStatus()
{
    if (HealthStatus != "") {
        cout << "\nТекущий статус здоровья: " << HealthStatus << "\nВведите новый статус здоровья: ";
        do {
            cin >> HealthStatus;
        } while (HealthStatus == "");
    }
}

//Чит на здоровье
void CheatsHealthStatus(MedicalCard& medicalcard)
{
    cout << "\nАктивирован чит, статус здоровья - Здоров!" << endl;
    medicalcard.HealthStatus = "Здоров";
}
