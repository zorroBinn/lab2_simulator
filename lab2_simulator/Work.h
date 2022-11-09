#pragma once
#include "Human.h"
#include <String>
using namespace std;
using std::string;
//Объект работа
class Work
{
	Human human; //Персонаж
	string NameWork; //Название работы
	int Payment; //Оплата за работу

public:
	Work();//Конструктор без параметров
	Work(Human human);//конструктор с одним параметром
	Work(Human human, string namework, int payment);//Конструктор с параметрами
	void WorkInit(Human human, string namework, int payment);//Инициализация работы
	void WorkRead(Human human);//Ввод информации о работе с клавиатуры
	void WorkDisplay();//Вывод информации о работе
	void Working(Human human);//Метод "работать"
	Work operator+(const Work& other); //перегрузка оператора + (сложение 2х работ)
};