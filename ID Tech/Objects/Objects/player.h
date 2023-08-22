#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Player
{
	public:
		Player();
		Player(string inputname);

		string name;
		void Greet();
};