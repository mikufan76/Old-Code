// Objects.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Player.h"

int main()
{
	Player thePlayer;
	thePlayer.Greet();

	Player playerTwo("Player Name");
	playerTwo.Greet();
}