// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int multiplier(int);

int main()
{
	using namespace std;
	int a;
	int b;

	cout << "Enter number of things.\n";
	cin >> a;
	b = multiplier(a);
	cout << "Things times 5 is " << b << endl;
	cin.get();
	cin.get();
	return 0;
}

int multiplier(int i)
{
	return i * 5;
}