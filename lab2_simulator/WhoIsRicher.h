#pragma once
#include <iostream>

//Шаблон класса 
template <typename T>
class WhoIsRicher
{
public:
	static T WhoisRicher(T t1, T t2) { //Сравнения двух классов, имеющих поле "баланс"
		if (t1.GetMoneyBalance() > t2.GetMoneyBalance())
			return t1;
		else
			return t2;
	}
};
