#pragma once

class Document //Базовый класс - Документ
{
protected: 
	int nomber; //Номер документа

public:
	Document(); //Конструктор без параметров
	Document(int nomber); //Конструктор с параметром
	int GetNomber(); //Геттер номера
};

