#pragma once
#include "Human.h"

class MedicalCard
{
	Human human;
	int Weight, Height;
	char HealthStatus[25];

public:
	MedicalCard();
	MedicalCard(Human human, int weight, int height, const char healthstatus[25]);
	void MedicalcardDisplay();
	void BodyMassIndex();
	void SetHealthStatus();
};

