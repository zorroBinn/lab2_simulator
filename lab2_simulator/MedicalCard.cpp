#include "MedicalCard.h"
#include <iostream>
//Конструктор без параметров
MedicalCard::MedicalCard()
{
    this->Weight = 0;
    this->Height = 0;
    strcpy_s(this->HealthStatus, "");
    this->human = Human();
}
//Конструктор с параметрами
MedicalCard::MedicalCard(Human human, int weight, int height, const char healthstatus[25])
{
	this->Weight = weight;
	this->Height = height;
	strcpy_s(this->HealthStatus, healthstatus);
	this->human = human;
}
//Ввод информации о медкарте с клавиатуры
void MedicalCard::MedicalCardRead(Human human)
{
    int weight, height;
    char strstatus[25];
    std::cout << "\nвведите рост персонажа в см: ";
    std::cin >> height;
    std::cout << "\nвведите вес персонажа в кг: ";
    std::cin >> weight;
    std::cout << "\nУкажите статус здоровья персонажа: ";
    std::cin >> strstatus;
    this->human = human;
    strcpy_s(this->HealthStatus, strstatus);
    this->Weight = weight;
    this->Height = height;
}
//Вывод информации о медкарте
void MedicalCard::MedicalcardDisplay()
{
    human.HumanNameSexAgeDisplay();
    std::cout << "\nРост: " << Height << "\nВес: " << Weight << "\nСтатус здоровья: " << HealthStatus;
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
            std::cout << "Нормальный вес, ИМТ = " << Index;
        else if (Index <= 18.5)
            std::cout << "Дефицитный веса, ИМТ = " << Index;
        else
            std::cout << "Избыточный вес, ИМТ = " << Index;
    }
}
//Метод изменения статуса здоровья
void MedicalCard::SetHealthStatus()
{
    if (HealthStatus != NULL) {
        std::cout << "\nТекущий статус здоровья: " << HealthStatus << "\nВведите новый статус здоровья: ";
        do {
            std::cin >> HealthStatus;
        } while (HealthStatus[0] == NULL);
    }
}