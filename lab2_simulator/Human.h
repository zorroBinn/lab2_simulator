#pragma once
#include "Clothes.h"

typedef struct {
	int Age, Moneybalance;
	char Name[40], Sex[20];
	Clothes clothes;
} Human;

Human HumanInit(int age, const char name[20], const char sex[20], Clothes clothes);
Human HumanRead();
void HumanDisplay(Human human, Clothes clothes);
Human HumanUpgradeClothes(Human human, Clothes clothes);