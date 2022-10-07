#pragma once
#include "Clothes.h"

typedef struct {
	int Age, Moneybalance;
	char Name[40], Sex[20];
	Clothes clothes;
} Human;

Human HumanInit(int age, char name[20], char sex[20], Clothes clothes);
void HumanRead(Clothes clothes);
void HumanDisplay(Human human);