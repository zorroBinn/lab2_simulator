#include "Realty.h"
#include <iostream>

Realty::Realty()
{
}

Realty::Realty(const char housing[30], const char vehicle[30])
{
	strcpy(this->Housing, housing);
	strcpy(this->Vehicle, vehicle);
}

void Realty::RealtyRead()
{
	char strhousing[30] = "�����", strvehicle[30] = "���������";
	std::cout << "\n��������� �����: " << strhousing << "\n��������� ��: " << strvehicle;
	strcpy(this->Housing, strhousing);
	strcpy(this->Vehicle, strvehicle);
}

void Realty::RealtyDisplay()
{
	std::cout << "\n�����: " << Housing << "\n������������ ��������: " << Vehicle;
}

void Realty::BuyNew(Human human)
{
}
