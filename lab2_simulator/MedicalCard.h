#pragma once
#include "Human.h"

typedef struct {
	Human human;
	double Weight, Height;
	char HealthStatus[25];
} MedicalCard;

MedicalCard MedicalCardInit(Human human, double weight, double height, char healthstatus[25]);
void MedicalCardRead();
void MedicalcardDisplay(MedicalCard medicalcard);
double BodyMassIndex(MedicalCard medicalcard);
void SetHealthStatus(MedicalCard medicalcard);