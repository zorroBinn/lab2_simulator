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
    bool correctinput = 0;
    int weight, height, nom;
    string strstatus, strweight, strheight, strnom;
    while (!correctinput) {
        try
        {
            cout << "Введите рост персонажа в см: " << endl;
            cin >> strheight;
            cout << "Введите вес персонажа в кг: " << endl;;
            cin >> strweight;
            weight = stoi(strweight);
            height = stoi(strheight);
            if (weight < 2 || weight >550) {
                throw "Некорректный ввод веса";
            }
            if (height < 30 || height > 300) {
                throw height;
            }
            correctinput = 1;
        }
        catch (invalid_argument & ex)
        {
            cout << "Некорректный ввод веса и/или роста персонажа" << endl;
        }
        catch (const string ex) 
        {
            cout << ex << endl;
        }
        catch (const int ex)
        {
            cout << "Вес или рост не может быть равен " << ex << endl;
        }
        cin.ignore(1024, '\n');
    }
    while (correctinput) {
        try
        {
            cout << "Укажите статус здоровья персонажа: " << endl;
            getline(cin, strstatus);
            correctinput = 0;
        }
        catch (const exception&)
        {
            cout << "Некорректный ввод состояния здоровья" << endl;
        }
    }/*
    while (!correctinput) {
        try {
            cout << "Ввдите пятизначный номер документа: " << endl;
            cin >> strnom;
            nom = stoi(strnom);
            if (nom < 10000 || nom > 99999)
                throw nom;
            correctinput = 1;
        }
        catch (invalid_argument& ex) {
            cout << "Некорректный ввод номера документа" << endl;
        }
        catch (const int ex) {
            cout << "Номер документа не может быть равен" << ex << endl;
        }
        cin.ignore(1024, '\n');
    }*/
    this->human = human;
    this->HealthStatus = strstatus;
    this->Weight = weight;
    this->Height = height;
}

//Вывод информации о медкарте
void MedicalCard::MedicalcardDisplay()
{
    cout << "Мелицинская карта номер " << nomber << ":" << endl;
    human.HumanNameSexAgeDisplay();
    cout << "Рост: " << Height << "\nВес: " << Weight << "\nСтатус здоровья: " << HealthStatus << endl;;
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
            cout << "Нормальный вес, ИМТ = " << Index << endl;
        else if (Index <= 18.5)
            cout << "Дефицитный веса, ИМТ = " << Index << endl;
        else
            cout << "Избыточный вес, ИМТ = " << Index << endl;;
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
    bool correctinput = 0;
    string strstatus;
    cout << "\nТекущий статус здоровья: " << HealthStatus << "\nВведите новый статус здоровья: ";
    while (!correctinput) {
        try
        {
            getline(cin, strstatus);
            correctinput = 1;
        }
        catch (const exception&)
        {
            cout << "Некорректный ввод состояния здоровья" << endl;
        }
    }
}

MedicalCard& MedicalCard::operator= (Document& document)
{
    try {
        if (this->Weight == 0 || this->Height == 0) {
            throw "Невозможно присвоить номер документа, т.к. документ ещё не создан";
        }
        this->nomber = document.GetNomber();
        return *this;
    }
    catch (string ex) {
        cout << ex << endl;
    }
}

//Чит на здоровье
void CheatsHealthStatus(MedicalCard& medicalcard)
{
    cout << "\nАктивирован чит, статус здоровья - Здоров!" << endl;
    medicalcard.HealthStatus = "Здоров";
}
