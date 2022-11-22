#include "Document.h"
#include <iostream>

Document::Document() //конструктор без параметров
{
	srand(time(0));
	this->nomber = 10000 + rand() % 10000; //ѕрисвоение документу рандомного номера
}

Document::Document(int nomber) // онстркуток с параметром
{
	this->nomber = nomber;
}
