#pragma once

typedef struct {
	int ClothesStatus;
	char Body[20], Pants[20], Shoes[20];
} Clothes;

Clothes ClothesInit(int conditions, const char body[20], const char pants[20], const char shoes[20]);
Clothes ClothesRead();
void ClothesDisplay(Clothes clothes);
Clothes TearClothes(Clothes clothes);
Clothes SewUpClothes(Clothes clothes);
