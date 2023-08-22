// ReadingFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main()
{
	fstream fileStream;
	fileStream.open("test.txt", ios::out);
	if (fileStream.is_open())
	{
		cout << "file opened successfully" << endl;
		fileStream << "this is our file" << endl;
	}
	fileStream.close();
	fstream readStream;
	readStream.open("test.txt", ios::in);
	string readWord;
	string readLine;
	if (readStream.is_open())
	{
		readStream >> readWord;
		cout << readWord << endl;
		getline(readStream, readLine);
		cout << readLine << endl;
	}
	readStream.close();
		return 0;
}

