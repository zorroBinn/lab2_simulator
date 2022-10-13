#pragma once
#include "Human.h"

class Work
{
	char NameWork[30];
	int Payment;

public:
	Work();
	Work(const char namework[30], int payment);
	void WorkInit(const char namework[30], int payment);
	void WorkRead();
	void WorkDisplay();
	void Working(Human human);
};

