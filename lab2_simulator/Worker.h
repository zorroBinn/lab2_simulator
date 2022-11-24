#pragma once
#include "Human.h"
#include <String>
using namespace std;
using std::string;

//Производный класс работник
class Worker : public Human
{
protected:
	string NameWork; //Название работы
	int Payment; //Оплата за работу

public:
	Worker();//Конструктор без параметров
	Worker(Human& human, string namework, int payment);//Конструктор с параметрами
	void WorkerRead(Human& human);//Ввод информации о работнике с клавиатуры
	void HumanCardDisplay(); //Перегрузка метода базового класса в производном
	void Working(Human &human);//Метод "работать"
	Worker& operator= (Human& human); //Перегрузка оператора присваивания производному классу базового
	friend ostream& operator << (ostream& out, Worker worker); //Вывод информации о работнике (перегрузка <<)
};
