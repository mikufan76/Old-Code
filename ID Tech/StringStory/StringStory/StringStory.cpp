// StringStory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;



int main()
{
	string userName;
	cout << "What's your name?" << endl;
	cin >> userName;

	string story =
		"Once upon a time there was \n"
		"a person named charname, and \n";

	int index;
	index = story.find("charname");
	while (index != -1)
	{
		story.replace(index, 8, userName);
		index = story.find("charname");
	}


	cout << story << endl;
    return 0;
}

