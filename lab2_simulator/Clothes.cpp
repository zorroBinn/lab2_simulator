#include "Clothes.h"
#include <iostream>
#include <string>
#include <regex>
using namespace std;

int Clothes::count = 0;

//Конструктор без параметров
Clothes::Clothes()
{
	this->ClothesStatus = 0;
	this->Body = "";
	this->Pants = "";
	this->Shoes = "";
	count++;
}

//Конструктор с параметрами
Clothes::Clothes(int conditions, string body, string pants, string shoes)
{
	this->ClothesStatus = conditions;
	this->Body = body;
	this->Pants = pants;
	this->Shoes = shoes;
	count++;
	this->clothingsetcount = count;
}

//Ввод информации об одежде с клавиатуры
void Clothes::ClothesRead()
{
	bool correctinput = 0;
	int status;
	string strbody, strpants, strshoes, strstatus;
	while (!correctinput) {
		try
		{
			cout << "\nВведите информацию об одежде персонажа:\nВерхняя одежда: ";
			cin >> strbody;
			strbody = regex_replace(strbody, regex("^ +| +$|( ) +"), "$1");
			cout << "Штаны: ";
			cin >> strpants;
			strpants = regex_replace(strpants, regex("^ +| +$|( ) +"), "$1");
			cout << "Обувь: ";
			cin >> strshoes;
			strshoes = regex_replace(strshoes, regex("^ +| +$|( ) +"), "$1");
			if (strbody == "" || strpants == "" || strshoes == "") {
				throw "Ошибка ввода наименований одежды";
			}
			correctinput = 1;
		}
		catch (const string ex)
		{
			cout << ex << endl;
		}
	}
	while (correctinput) {
		try
		{
			cout << "Состояние одежды (в %): ";
			cin >> strstatus;
			status = stoi(strstatus);
			correctinput = 0;
		}
		catch (invalid_argument & ex)
		{
			cout << "Некорректный ввод процента целостности одежды" << endl;
		}
	}
	this->ClothesStatus = status;
	this->Body = strbody;
	this->Pants = strpants;
	this->Shoes = strshoes;
	count++;
	this->clothingsetcount = count;
}

//Вывод информации об одежде
void Clothes::ClothesDisplay()
{
	cout << "\nКомплект одежды номер " << clothingsetcount << ":\nВерхняя одежда : " << Body << "\nШтаны : " << Pants << "\nОбувь : " << Shoes << "\nСостояние одежды : " << ClothesStatus << endl;
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

//Статическая функция возврата количества сетов одежды
int Clothes::Getcount()
{
	return count;
}

//чит на починку одежды
void CheatsSewUpClothes(Clothes& clothes)
{
	cout << "\nАктивирован чит, одежда полностью починена!" << endl;
	clothes.ClothesStatus = 100;
}
