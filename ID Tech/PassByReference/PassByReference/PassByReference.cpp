// PassByReference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void getString(string &input);


int main()
{
	string input = "Starting Value";
	getString(input);
	cout << input << endl;
}
void getString(string &input)
{
	cout << "Type a string" << endl;
	getline(cin, input);
	cout << input << endl;
}


