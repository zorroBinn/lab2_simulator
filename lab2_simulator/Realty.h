#pragma once
#include "Human.h"

typedef struct {
	char Housing[30], Vehicle[30];
} Realty;

Realty RealtyInit(const char housing[30], const char vehicle[30]);
Realty RealtyRead();
void RealtyDisplay(Realty realty);
void BuyNew(Realty realty, Human &human);