#pragma once

class Document //Базовый класс, виртуальный класс - Документ
{
protected: 
	int nomber; //Номер документа

public:
	Document(); //Конструктор без параметров
	Document(int nomber); //Конструктор с параметром
	virtual void ExtendDocument() = 0; //Виртуальная функция продления срока действия документа;
};

