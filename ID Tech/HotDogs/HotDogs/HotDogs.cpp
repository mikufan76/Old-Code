// HotDogs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int hotDogsADay[7] = { 107, 121, 60, 20, 170, 60, 0 };
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter how many hot dogs you ate" << endl;
		cin >> hotDogsADay[i];
	}
	double hotDogAverage = 0;
	for (int i = 0; i < 7; i++)
	{
		hotDogAverage += hotDogsADay[i];
	}
	cout << "You ate " << hotDogAverage << " this week." << endl;
	hotDogAverage = hotDogAverage / 7;
	cout << "On average you eat " << hotDogAverage << " hot dogs a day." << endl;
}

