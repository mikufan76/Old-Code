// IfStatements.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int health = 5;
	if (health >7)
	{ 
		health-= 6;
			cout << health << endl;
	}
	else if (health >0 && health <10)
	{
		health+= 4;
		cout << health << endl;
	}
	else
	{
		cout << "you are dead" << endl;
	}

    return 0;
}

