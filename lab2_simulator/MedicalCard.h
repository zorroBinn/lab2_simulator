#pragma once
#include "Human.h"

typedef struct {
	Human human;
	int Weight, Height;
	char HealthStatus[25];
} MedicalCard;

MedicalCard MedicalCardInit(Human human, int weight, int height, const char healthstatus[25]);
MedicalCard MedicalCardRead(Human human);
void MedicalcardDisplay(MedicalCard medicalcard);
void BodyMassIndex(MedicalCard medicalcard);
void SetHealthStatus(MedicalCard &medicalcard);