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
	char strhousing[30] = "Гараж", strvehicle[30] = "Велосипед";
	std::cout << "\nНачальное жильё: " << strhousing << "\nНачальное ТО: " << strvehicle;
	strcpy(this->Housing, strhousing);
	strcpy(this->Vehicle, strvehicle);
}

void Realty::RealtyDisplay()
{
	std::cout << "\nЖильё: " << Housing << "\nТранспортное средство: " << Vehicle;
}

void Realty::BuyNew(Human human)
{
}
