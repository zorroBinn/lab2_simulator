#pragma once
#include "Clothes.h"

class Human
{
	int Age;
	public: int Moneybalance;
	char Name[40], Sex[20];
	Clothes clothes;

public:
	Human();
	Human(int age, const char name[20], const char sex[20], Clothes clothes);
	void HumanRead();
	void HumanDisplay();
};