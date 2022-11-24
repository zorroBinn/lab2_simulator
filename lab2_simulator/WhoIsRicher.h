#pragma once
#include <iostream>

template <typename T>
class WhoIsRicher
{
public:
	static T WhoisRicher(T t1, T t2) {
		if (t1.GetMoneyBalance() > t2.GetMoneyBalance())
			return t1;
		else
			return t2;
	}
};
