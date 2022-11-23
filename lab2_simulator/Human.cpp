#include "Human.h"
#include <iostream>
#include <String>

using namespace std;

//Конструктор без параметров
Human::Human()
{
	this->Age = 0;
	this->Name = "";
	this->Moneybalance = 0;
	this->Sex = "";
}

//конструктор с одним параметром
Human::Human(Clothes clothes)
{
	this->clothes = clothes;
}

//Конструктор с параметрами
Human::Human(int age, string name, string sex, Clothes clothes)
{
	this->Age = age;
	this->Name = name;
	this->Moneybalance = 1000;
	this->Sex = sex;
	this->clothes = clothes;
}

int Human::GetAge()
{
	return this->Age;
}

string Human::GetSex()
{
	return this->Sex;
}

Clothes Human::GetClothes()
{
	return this->clothes;
}

//Ввод информации о персонаже с клавиатуры
void Human::HumanRead()
{
	string strname, strsex, strage;
	int age;
	bool correctinput = 0;
	cout << endl;
	while (!correctinput) {
		try
		{
			cout << "\nВведите информацию о персонажe:\nИмя: ";
			getline(cin, strname);
			cout << "Пол: ";
			getline(cin, strsex);
			correctinput = 1;
		}
		catch (const exception&)
		{
			cout << "Некорректный ввод имени и/или пола" << endl;
		}
	}
	while (correctinput) {
		try
		{
			cout << "Возраст: ";
			cin >> strage;
			age = stoi(strage);
			if (age < 0 || age > 110) {
				throw age;
			}
			correctinput = 0;
		}
		catch (invalid_argument & ex)
		{
			cout << "Некорректный ввод возраста" << endl;
		}
		catch (int ex)
		{
			cout << "Возраст персонажа не может равняться " << age << endl;
		}
		cin.ignore(1024, '\n');
	}
	this->Age = age;
	this->Name = strname;
	this->Sex = strsex;
	clothes.ClothesRead();
	this->Moneybalance = 1000;
	this->clothes = clothes;
}

//Вывод имени, пола, возраста (для медкарты)
void Human::HumanNameSexAgeDisplay()
{
	cout << "Имя персонажа: " << Name << "\nПол персонажа: " << Sex << "\nВозраст персонажа: " << Age << endl;
}

//Вывод имени, возраста (перегружен в производном классе)
void Human::HumanCardDisplay()
{
	cout << "Имя: " << Name << "\nВозраст: " << Age << endl;
}

//Метод изменения баланса
void Human::ChangeMoney(long int money) 
{
	long int Balance = (this->Moneybalance + money);
	this->Moneybalance = Balance;
}

//Метод вывода баланса (геттер)
long int Human::GetMoneyBalance()
{
	return this->Moneybalance;
}

//Метод вывода имени персонажа (геттер)
string Human::GetName() 
{
	return this->Name;
}

//Перегрузка оператора ++ префиксного 
Human& Human::operator++()
{
	this->Age++;
	return *this;
}

//Перегрузка оператора ++ постфиксного 
Human Human::operator++(int)
{
	Human temp(*this);
	this->Age++;
	return temp;
}

//Чит на деньги
void CheatsMoneyBalance(Human& human) {
	cout << "\nАктивирован чит, баланс пополнен!" << endl;
	human.Moneybalance = 1000000000;
}

//Вывод информации о персонаже(перегрузка <<)
ostream& operator<<(ostream& out, Human human)
{
	out << "\nИмя персонажа: " << human.Name << "\nПол персонажа: " << human.Sex << "\nВозраст персонажа: " << human.Age << "\nИгровой баланс денег: " << human.Moneybalance << "\nОдежда персонажа:";
	cout << human.clothes;
	return out;
}
