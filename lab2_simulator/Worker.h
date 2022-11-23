#pragma once
#include "Human.h"
#include <String>
using namespace std;
using std::string;

class Worker : public Human
{
protected:
	string NameWork; //Название работы
	int Payment; //Оплата за работу

public:
	Worker();//Конструктор без параметров
	Worker(Human& human, string namework, int payment);//Конструктор с параметрами
	void WorkerRead(Human& human);//Ввод информации о работнике с клавиатуры
	void WorkerDisplay();
	void Working(Human &human);//Метод "работать"
	Worker& operator= (Human& human);
};

