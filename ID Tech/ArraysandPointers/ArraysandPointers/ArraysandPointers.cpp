// ArraysandPointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string words[4];
	words[0] = "Hello!";
	*(words + 1) = "how";
	*(words + 2) = " are ";
	cout << sizeof(string) << endl;
	for (int i = 0; i < sizeof(words[0]) * 4; i += sizeof(words))
	{
		cout << "The address is " << &words[i] << endl;
	}
}

