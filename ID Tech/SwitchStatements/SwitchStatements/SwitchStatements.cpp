// SwitchStatements.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int choice;
	cout << "Enter in your number choice." << endl;
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "tight" << endl;
			break;
		case 2:
			cout << "not so tight" << endl;
			break;
		case 3:
			cout << "woah there bucko bb" << endl;
			break;
		case 4:
			cout << "HEEEEEEEEEEEELLLLLLLo" << endl;
			break;
		default:
			cout << "huuuuhhng" << endl;
	}


}

