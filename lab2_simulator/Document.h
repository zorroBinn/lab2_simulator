#pragma once

class Document //Базовый класс - Документ
{
protected: 
	int nomber; //Номер документа

public:
	Document(); //Конструктор без параметров
	Document(int nomber); //Констркуток с параметром
	int GetNomber(); //Геттер номера
};

