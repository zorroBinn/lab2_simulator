#include "Wardrobe.h"

bool ComparisonByClothesStatus(Clothes a, Clothes b) {
	return a.GetClothesStatus() > b.GetClothesStatus();
}
bool ComparisonByClothingSetCount(Clothes a, Clothes b) {
	return a.GetClothingSetCount() < b.GetClothingSetCount();
}

void Wardrobe::Add(Clothes clothes)
{
	wardrobe.push_back(clothes);
}

void Wardrobe::Read()
{
	int N;
	wardrobe.reserve(10);
	do {
		cout << "Сколько комплектов одежды добавить в гардероб? (Не более пяти комплектов): ";
		cin >> N;
	} while (N < 1 || N > 5);
	cin.ignore(1024, '\n');
	Clothes* clothes = new Clothes[N];
	for (int i = 0; i < N; i++) {
		clothes[i].ClothesRead();
		wardrobe.push_back(clothes[i]);
	}
}

void Wardrobe::Display()
{
	for (int i = 0; i < wardrobe.size(); i++) {
		wardrobe[i].ClothesDisplay();
	}
}

void Wardrobe::Delete(int num)
{
	if (num > wardrobe.size() || num < 0) throw new exception("Выход за пределы значений");
	wardrobe.erase(wardrobe.begin() + num - 1);
}

void Wardrobe::SortByClothesStatus()
{
	sort(wardrobe.begin(), wardrobe.end(), ComparisonByClothesStatus);
}

void Wardrobe::SortByClothingSetCount()
{
	sort(wardrobe.begin(), wardrobe.end(), ComparisonByClothingSetCount);
}

void Wardrobe::SearchByClothesStatus(int st)
{
	bool flag = 0;
	for (int i = 0; i < wardrobe.size(); i++) {
		if (wardrobe[i].GetClothesStatus() == st) {
			if (!flag) {
				cout << "Сеты одежды с состоянием " << st << "%:" << endl;
				flag = 1;
			}
			wardrobe[i].ClothesDisplay();
		}
	}
	if (!flag) {
		cout << "Сетов одежды с состоянием " << st << "% в гардеробе нет!" << endl;
	}
}

void Wardrobe::SearchByClothingSetCount(int count)
{
	bool flag = 0;
	for (int i = 0; i < wardrobe.size(); i++) {
		if (wardrobe[i].GetClothingSetCount() == count) {
			cout << "Сет одежды под номером " << count << ":" << endl;
			wardrobe[i].ClothesDisplay();
			flag = 1;
		}
	}
	if (!flag) {
		cout << "Сетов одежды под номером " << count << " в гардеробе нет!" << endl;
	}
}
