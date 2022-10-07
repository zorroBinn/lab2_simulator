#pragma once
#include "Human.h"

typedef struct {
	char Housing[30], Vehicle[30];
} Realty;

Realty RealtyInit(char housing[30], char vehicle[30]);
void RealtyRead();
void RealtyDisplay(Realty realty);
void BuyNew(Realty realty, Human human);