// TextTournament.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Header.h"

	void setupPlayerStats(string &name, int &str, int &def, int &armor, int &skill, int &wins);
	void savePlayerStats(string name, int str, int def, int armor, int skill, int wins);

int main()
{
	random_device rd;
	uniform_int_distribution<int> d6(1, 6);
	string player1Name;
	int player1Str;
	int player1Def;
	int player1Armor;
	int player1Skill;
	int player1Wins;

	string player2Name;
	int player2Str;
	int player2Def;
	int player2Armor;
	int player2Skill;
	int player2Wins;

	cout << "setup player 1" << endl;
	setupPlayerStats(player1Name, player1Str, player1Def, player1Armor, player1Skill, player1Wins);
	cout << "Setup Player 2" << endl;
	setupPlayerStats(player2Name, player2Str, player2Def, player2Armor, player2Skill, player2Wins);

	int player1Health = 20;
	int player2Health = 20;
	int turns = 0;

	cout << player1Name << " - " << player1Wins << " Wins" << endl;
	cout << "- VS. -" << endl;
	cout << player2Name << " - " << player2Wins << " Wins" << endl;
	cout << "FIGHT!" << endl;

	while (player1Health > 0 && player2Health > 0 && turns < 100)
	{
		int attackRoll;
		int damageRoll;
		
		//Player 1
		attackRoll = player1Skill + d6(rd);
		if (attackRoll >= 3 + player2Def)
		{
			cout << player1Name << " hits " << player2Name << "." << endl;
			damageRoll = player1Str + d6(rd) - player2Armor;
			if (damageRoll > 0)
			{
				cout << player2Name << " Takes " << damageRoll << " damage." << endl;
				player2Health -= damageRoll;
				
			}
			else
			{
				cout << player2Name << "'s armor blocks the hit." << endl;
			}
		}
		else
		{
			cout << player1Name << " missed " << endl;
		}
		// player 2
		attackRoll = player2Skill + d6(rd);
		if (attackRoll >= 3 + player1Def)
		{
			cout << player2Name << " hits " << player1Name << "." << endl;
			damageRoll = player2Str + d6(rd) - player1Armor;
			if (damageRoll > 0)
			{
				cout << player1Name << "Takes " << damageRoll << " damage." << endl;
				player1Health -= damageRoll;
				
			}
			else
			{
				cout << player1Name << "'s armor blocks the hit." << endl;
			}
		}
		else
		{
			cout << player2Name << " missed" << endl;
		}
		cout << player1Name << " HP: " << player1Health << endl;
		cout << player2Name << " HP: " << player2Health << endl;
		turns++;

	}
	if ((player1Health > 0 && player2Health > 0) || (player1Health < 0 && player2Health < 0))
	{
		cout << "Draw!" << endl;
	}
	else if (player1Health > 0 && player2Health < 0)
	{
		cout << player1Name << " Wins!" << endl;
		player1Wins++;
	}
	else if(player1Health < 0 && player2Health > 0)
	{
		cout << player2Name << " Wins!" << endl;
		player2Wins++;
	}

	// saves
	savePlayerStats(player1Name, player1Str, player1Def, player1Armor, player1Skill, player1Wins);
	savePlayerStats(player2Name, player2Str, player2Def, player2Armor, player2Skill, player2Wins);

}


void setupPlayerStats(string &name, int &str, int &def, int &armor, int &skill, int &wins) {

	fstream file;
	cout << "name:  ";
	getline(cin, name);

	if (name == "")
	{
		name = "Bon";
	}
	string filename = name + ".txt";

	file.open(filename, ios::in);
	if (file.is_open())
	{
		cout << "File has been found, loading from file." << endl;
		file >> str;
		file >> def;
		file >> armor;
		file >> skill;
		file >> wins;
	}
	else
	{
		bool accepted = false;
		while(!accepted)
		{
			int points = 20;
			cout << points << "points left." << endl;
			cout << "Player strength" << endl;
			cin >> str;
			points -= str;

			cout << points << "points left." << endl;
			cout << "Player defense" << endl;
			cin >> def;
			points -= def;

			cout << points << "points left." << endl;
			cout << "Player armor" << endl;
			cin >> armor;
			points -= armor;

			cout << points << "points left." << endl;
			cout << "Player skill" << endl;
			cin >> skill;
			points -= skill;

			wins = 0;
			if (points >=0)
			{
				accepted = true;
			}
			else
			{
				cout << "You have used too many points!" << endl;
			}
		}
	}

}



void savePlayerStats(string name, int str, int def, int armor, int skill, int wins) 
{
	fstream file;
	string filename = name + ".txt"; 
	file.open(filename, ios::out);
	file << str << endl;
	file << def << endl;
	file << armor << endl;
	file << skill << endl;
	file << wins << endl;
	
	file.close();
}

