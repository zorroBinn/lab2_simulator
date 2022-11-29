#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Clothes.h"

using namespace std;

class Wardrobe
{
protected: 
	vector<Clothes> wardrobe;

public:
	void Add(Clothes clothes);
	void Read();
	void Display();
	void Delete(int num);
	void SortByClothesStatus();
	void SortByClothingSetCount();
	void SearchByClothesStatus(int st);
	void SearchByClothingSetCount(int count);
};

