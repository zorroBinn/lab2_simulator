#pragma once
#include "Clothes.h"

typedef struct {
	int Age, Moneybalance;
	char Name[40], Sex[20];
	Clothes clothes;
} Human;

Human HumanInit(int age, int moneybalance, char name[20], char sex[20], Clothes clothes);
void HumanRead();
void HumanDisplay(Human human);
void KillHuman(Human human);