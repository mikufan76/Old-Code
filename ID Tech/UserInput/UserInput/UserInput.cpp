// UserInput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Main.h"
using namespace std;



int main()
{
	string myName;
	cout << "Enter a name" << endl;
	cin >> myName; 
	cout << "Hello Ms. " << myName << " How is your day going? " << endl;
	int age;
	string answer;
	cin >> answer;
	cout << "Your day is  going " << answer << "? Tight!" << endl;
		cout << "Enter an age" << endl;
		cin >> age;
		cout << "Your age is: " << age << endl;

    return 0;
}

