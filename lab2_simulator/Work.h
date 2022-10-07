#pragma once
#include "Human.h"

typedef struct {
	char NameWork[30];
	int Payment;
} Work;

Work WorkInit(char namework[30], int payment);
void WorkRead();
void WorkDisplay(Work work);
void Working(Work work, Human human);