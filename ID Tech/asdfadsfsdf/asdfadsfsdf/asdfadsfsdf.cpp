// asdfadsfsdf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "player.h"

int main()
{
	player thePlayer;
	thePlayer.Greet();

	player playerTwo("Player Name");
	playerTwo.Greet();
}
