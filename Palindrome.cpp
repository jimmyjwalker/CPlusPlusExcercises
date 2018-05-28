#include "stdafx.h"
#include <iostream>
#include <string>

bool checkPalindrome(std::string inputString) {
	char temp1;
	char temp2;
	int i, j;
	bool status = true;
	for (j = 0, i = inputString.size() - 1; j < i; --i, ++j)
	{
		temp1 = inputString[i];
		temp2 = inputString[j];

		if (temp1 != temp2)
		{
			status = false;
			j = i;
		}
	}
	return status;
}

int main()
{
	using namespace std;
	cout << "Enter a word.\n";
	string inputString;
	cin >> inputString;
	if (checkPalindrome(inputString) == 1) {
		cout << "\nPalindrome";
	}
	else cout << "\nNot a Palindrome";
	cin.get();
	cin.get();
	return 0;
}