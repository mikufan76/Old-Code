// Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{

	// TODO Create an ArrayList of Strings
	vector<string> list;


	// TODO Add three strings to the list
	list.push_back("Hey look, a string.");
	list.push_back("Oh no, a string!");
	list.push_back("Wow! a string!");

    cout << "The list" << endl; 
	for (string element : list)
	{
		cout << element << endl;
	}

	cout << "The second element of the list:" << endl; 

}

