#pragma once
#include "Human.h"

typedef struct {
	Human human;
	double Weight, Height;
	char HealthStatus[25];
} MedicalCard;

MedicalCard MedicalCardInit(Human human, double weight, double height, const char healthstatus[25]);
void MedicalCardRead(Human human);
void MedicalcardDisplay(MedicalCard medicalcard);
void BodyMassIndex(MedicalCard medicalcard);
void SetHealthStatus(MedicalCard medicalcard);