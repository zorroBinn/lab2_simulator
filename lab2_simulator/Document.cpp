#include "Document.h"
#include <iostream>

Document::Document() //конструктор без параметров
{
	srand(time(0));
	this->nomber = 10000 + (rand()*rand()/rand()*17) % 10000; //Присвоение документу рандомного номера
}

Document::Document(int nomber) //Конструктор с параметром
{
	this->nomber = nomber;
}
