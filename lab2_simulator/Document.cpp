#include "Document.h"
#include <iostream>

Document::Document() //����������� ��� ����������
{
	srand(time(0));
	this->nomber = 10000 + rand() % 10000; //���������� ��������� ���������� ������
}

Document::Document(int nomber) //����������� � ����������
{
	this->nomber = nomber;
}
