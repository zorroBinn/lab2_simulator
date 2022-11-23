#include "Document.h"
#include <iostream>

Document::Document() //конструктор без параметров
{
	srand(time(0));
	this->nomber = 10000 + (rand()*rand()/rand()*17) % 10000; //ѕрисвоение документу рандомного номера
}

Document::Document(int nomber) // онструктор с параметром
{
	this->nomber = nomber;
}
