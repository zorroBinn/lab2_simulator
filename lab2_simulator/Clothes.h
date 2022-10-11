#pragma once
#include "Clothes.h"

class Clothes
{
	int ClothesStatus;
	char Body[20], Pants[20], Shoes[20];

public:
	Clothes();
	Clothes(int clothesstatus);
	Clothes(int conditions, const char body[20], const char pants[20], const char shoes[20]);
	void ClothesRead();
	void TearClothes();
	void SewUpClothes();
};

