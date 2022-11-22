#include "Document.h"
#include <iostream>

Document::Document() //конструктор без параметров
{
	srand(time(0));
	this->nomber = 10000 + (rand()*rand()/rand()*17) % 10000; //Присвоение документу рандомного номера
}

Document::Document(int nomber) //Констркуток с параметром
{
	this->nomber = nomber;
}

int Document::GetNomber() //Геттер номера
{
	return this->nomber;
}
