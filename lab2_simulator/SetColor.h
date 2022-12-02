#pragma once
#include "Clothes.h"
#include <iostream>
#include <string>

using namespace std;
using std::string;
class SetColor : public Clothes
{
protected: string setColor;

public: 
	SetColor() : Clothes() {
		this->setColor = "";
	}
	SetColor(string color) {
		this->setColor = color;
	}
	void ClothesDisplay() override {

		cout << "Цвет сета под номером " << this->clothingsetcount << ": " << this->setColor << endl;
	}
	SetColor& operator = (Clothes& clothes) {
		this->Body = clothes.getBody();
		this->ClothesStatus = clothes.GetClothesStatus();
		this->clothingsetcount = clothes.GetClothingSetCount();
		this->Pants = clothes.getPants();
		this->Shoes = clothes.getShoes();
		return *this;
	}
};

