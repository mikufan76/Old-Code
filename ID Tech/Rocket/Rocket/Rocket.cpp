// Rocket.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

bool blastOff();
bool blastOff()
{
	char confirmation;
	cout << "Enter y to launch and n to cancel." << endl;
	cin >> confirmation;
	if (confirmation == 'y')
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;

}


int main()
{
	bool launch;
	launch = blastOff();
	if (launch == true)
	{
		for (int i = 10; i > 0; i--)
		{
			cout << i << " seconds until launch" << endl;
		}
		cout << "rocket has been launched" << endl;
	}
	else
	{
		cout << "Rocket launch has been aborted." << endl;
	}
}

