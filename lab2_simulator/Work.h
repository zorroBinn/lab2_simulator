#pragma once
#include "Human.h"

class Work
{
	char NameWork[30];
	int Payment;

public:
	Work();
	Work(const char namework[30], int payment);
	void WorkDisplay();
	void Working();
};

