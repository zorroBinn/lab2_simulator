#include "Clothes.h"
#include <iostream>
//Конструктор без параметров
Clothes::Clothes()
{
	this->ClothesStatus = 0;
	strcpy_s(this->Body, "");
	strcpy_s(this->Pants, "");
	strcpy_s(this->Shoes, "");
}
//Конструктор с параметрами
Clothes::Clothes(int conditions, const char body[20], const char pants[20], const char shoes[20])
{
	this->ClothesStatus = conditions;
	strcpy_s(this->Body, body);
	strcpy_s(this->Pants, pants);
	strcpy_s(this->Shoes, shoes);
}
//Ввод информации об одежде с клавиатуры
void Clothes::ClothesRead()
{
	int status;
	char strbody[20], strpants[20], strshoes[20];
	std::cout << "\nВведите информацию об одежде персонажа:\nВерхняя одежда: ";
	std::cin >> strbody;
	std::cout << "Штаны: ";
	std::cin >> strpants;
	std::cout << "Обувь: ";
	std::cin >> strshoes;
	std::cout << "Состояние одежды (в %): ";
	std::cin >> status;
	this->ClothesStatus = status;
	strcpy_s(this->Body, strbody);
	strcpy_s(this->Pants, strpants);
	strcpy_s(this->Shoes, strshoes);
}
//Вывод информации об одежде
void Clothes::ClothesDisplay()
{
	std::cout << "\nВерхняя одежда: " << Body << "\nШтаны: " << Pants << "\nОбувь: " << Shoes << "\nСостояние одежды: " << ClothesStatus;
}
//Метод "Порвать одежду"
void Clothes::TearClothes()
{
	if (this->ClothesStatus > 0) {
		printf("\n\nВаша одежда порвалась!");
		this->ClothesStatus -= 15;
		if (this->ClothesStatus < 0)
			this->ClothesStatus = 0;
	}
}
//Метод "Зашить одежду"
void Clothes::SewUpClothes()
{
	if (this->ClothesStatus >= 0) {
		printf("\n\nВы зашили вашу одежду!");
		this->ClothesStatus += 20;
		if (this->ClothesStatus > 100)
			this->ClothesStatus = 100;
	}
}