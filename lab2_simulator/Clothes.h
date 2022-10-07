#pragma once

typedef struct {
	int ClothesStatus;
	char Body[20], Pants[20], Shoes[20];
} Clothes;

Clothes ClothesInit(int conditions, char body[20], char pants[20], char shoes[20]);
void ClothesRead();
void ClothesDisplay(Clothes clothes);
void TearClothes(Clothes clothes);
void SewUpClothes(Clothes clothes);
