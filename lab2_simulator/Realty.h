#pragma once
#include "Human.h"

class Realty
{
	char Housing[30], Vehicle[30];

public:
	Realty();
	Realty(const char housing[30], const char vehicle[30]);
	void RealtyDisplay();
	void BuyNew();
};

