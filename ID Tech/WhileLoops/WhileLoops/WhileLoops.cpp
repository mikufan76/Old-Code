// WhileLoops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age = 7;
	while (age <10)
	{
		cout << age << endl;
		age++;
	}
	bool guessed = false;
	while (!guessed)
	{
		int guess;
		cout << "How many dollars?" << endl;
		cin >> guess;
		if (guess == 6)
		{
			guessed = true;
		}
	}
		cout << "you win!" << endl;
		return 0;
}