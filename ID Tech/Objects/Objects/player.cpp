#include "stdafx.h"
#include "Player.h"

Player::Player()
{
	name = "Default";
}
Player::Player(string theName)
{
	name = theName;
}
	
void Player::Greet()
{
	cout << "Hey there " << name << "!" << endl;
}
