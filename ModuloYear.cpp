#include "stdafx.h"
#include <iostream>

int centuryFromYear(int);

int main()
{
	using namespace std;
	int date;
	int newCentury;

	cin >> date;
	newCentury = centuryFromYear(date);
	cout << newCentury;
	cin.get();
	cin.get();
	return 0;
}


int centuryFromYear(int year) {
	int century;
	int modulo;
	modulo = (year % 100);
	if (modulo == 0)
	{
		century = (year / 100);
	}
	else
		century = ((year / 100) + 1);
	return century;
}
