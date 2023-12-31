// TextAdventure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"
#include <windows.h>

int main()
{
	string name;
	cout << "State your name." << endl;
	cin >> name;
	Sleep(1000);
	cout << "Welcome Agent " << name << endl;
	int playerHealth = 2;
	if (playerHealth < 0)
	{
		cout << "You are dead." << endl;
	}
	cout << "You have " << playerHealth << " health. Try not to lose it lol." << endl;
	Sleep(2000);
	cout << "You venture to the secret location. It resembles an office building. It is very familiar to you." << endl;
	Sleep(3000);
	cout << "You hear footsteps walking towards you." << endl;
	Sleep(3000);
	cout << "A bullet is shot and it is coming towards you. Do you duck or jump? Answer 1 for duck and 2 for jump." << endl;
	int answerA;
	cin >> answerA;
	if (answerA == 1)
	{
		cout << "Alright! You dodged it." << endl;
		Sleep(2000);
	}
	else if (answerA == 2)
	{
		playerHealth--;
		cout << "Why did you jump? You jumped straight into the bullet. You have " << playerHealth << " health left." << endl;
		Sleep(3000);
	}
	else if (answerA != 1 || answerA != 2)
	{
		cout << "You did not do either. You leave and go home" << endl;
		return 0;
	}
	cout << "Time to get a move on! do you turn left or right? Answer 1 for left and 2 for right" << endl;
	cin >> answerA;
		if (answerA == 1)
		{
			cout << "You made it! You steal the flashdrive from the office and SKRT SKRT!" << endl;
			Sleep(2000);
		}
		else if (answerA == 2)
		{
			cout << "Boo boo! You are the fool and some guy shoots your foot." << endl;
			playerHealth--;
			cout << "You have " << playerHealth << " health left." << endl;
			if (playerHealth == 1)
			{
				cout << "You turn around and go back. You grab the flashdrive from the right and leave." << endl;
				Sleep(2000);
			}
		}
		if (playerHealth == 0)
		{
			cout << "You are dead." << endl;
			return 0;
		}
		else if (playerHealth >1)
		{
			cout << "Terrific, Agent " << name << " . We will be working again soon! Thank you." << endl;
			Sleep(2000);
		}
		else if (playerHealth = 1)
		{
			cout << "Agent " << name << ", you were harmed. However, you were able to get the flash drive nevertheless." << endl;
			Sleep(2000);
			cout << "However, you must be careful in the future." << endl;
			Sleep(2000);
		}
		Sleep(1000);
		cout << "~The next day~" << endl;
		Sleep(2000);
		cout << "You walk into your day job. It is your run of the mill office job. Your boss walks towards you." << endl;
		Sleep(3000);
		cout << "'Good morning, " << name << ", last night we had a break in. If you notice anything amiss, please report it to me.'" << endl;
		Sleep(2000);
		cout << "He walks toward another coworker, presumably telling them the same information." << endl;
		Sleep(1000);
		cout << "You walk towards the office kitchen. What do you do? For each option press 1-3 depending on the order." << endl;
		int choice;
		cout << "Do you 1) Drink water from the fridge 2) Eat a bagle 3) Kick over the garbage can ?" << endl;
		cin >> choice;
		switch (choice)
		{	
			case 1:
				cout << "You grab water from the fridge and drink up." << endl;
				Sleep(2000);
				cout << "..." << endl;
				Sleep(1000);
				cout << "It is really refreshing!" << endl;
				playerHealth++;
				Sleep(1000);
				cout << "You now have " << playerHealth << " health left." << endl;
				break;
			case 2:
				cout << "You grab a bagle." << endl;
				Sleep(1000);
				cout << "..." << endl;
				Sleep(2000);
				cout << "After taking a bite, you realize it is stale. You throw it out" << endl;
				Sleep(2000);
				break;
			case 3:
				cout << "You kick over the garbage can" << endl;
				Sleep(1000);
				cout << "..." << endl;
				Sleep(1000);
				cout << "Why did you do that? That was just mean. You quickly leave the room before anyone can accuse you." << endl;
				Sleep(3000);
				break;
			default:
				cout << "You leave the kitchen." << endl;
				Sleep(1000);
		}
		Sleep(1000);
		cout << "You walk towards your cubicle." << endl;
		Sleep(1000);
		cout << "You walk in, it is messy as usual." << endl;
		Sleep(2000);
		cout << "You do not notice anything missing. You sit down and begin working" << endl;
		Sleep(2000);
		cout << "..." << endl;
		Sleep(1000);
		cout << "You finish your work for the day. It has only been two hours. Business is slow." << endl;
		Sleep(1000);
		cout << "You hear a shout from the next cubicle." << endl;
		Sleep(1000);
		cout << "You walk over and investigate the cubicle." << endl;
		Sleep(2000);
		cout << "The woman in the cubicle is searching through all of her drawers. Papers are flying everywhere as she investigates with reckless abandon." << endl;
		Sleep(4000);
		cout << "What do you say to her" << endl;
		Sleep(1000);
		cout << " 1) 'Do you need some help?' or 2) 'You're making a mess." << endl;
		cin >> choice;
		switch (choice)
		{
			case 1:
				cout << "'Do you need some help?' You ask as you walk into the cubicle. She nods while searching." << endl;
				Sleep(3000);
				cout << "'What are you looking for?' You ask as you help her look through the drawers." << endl;
				Sleep(3000);
				cout << "'Something important,' she mutters." << endl;
				Sleep(1000);
				cout << "'I can't help you search if you don't tell me what you are looking for.' You reply as you stop investigating." << endl;
				Sleep(3000);
				cout << "'Then dont.' she replies." << endl;
				Sleep(1000);
				cout << "You get up and walk out of her office." << endl;
				Sleep(1000);
				break;
			case 2:
				cout << "'You're making a mess. Whatever you are looking for won't be found if you make more work for yourself.'" << endl;
				Sleep(2000);
				cout << "She glares at you. You decide to take your leave." << endl;
				Sleep(1000);
				break;
			default:
				cout << "You leave without saying anything." << endl;
				Sleep(1000);
		}
		
		Sleep(2000);
		cout << "As you leave the office, something wizzes past you. It was a shoe." << endl;
		Sleep(3000);
		cout << "..." << endl;
		Sleep(1000);
		cout << "You turn around, the woman in the cubicle is holding up her other shoe, ready to attack." << endl;
		Sleep(1000);
		cout << "You run away, picking up the shoe as you run, and bump into your boss. You tell him about what you saw and the attack." << endl;
		Sleep(3500);
		cout << "'What the heck?' he replies, 'I suppose the burglar stole something from her office. Why would she attack you?" << endl;
		Sleep(3500);
		cout << "You shrug in reply and lead him towards her office. Before you can arrive to your destination, the woman comes towards you and your boss." << endl;
		Sleep(3000);
		cout << "She takles your boss, leaving him stunned on the ground. You must protect him." << endl;
		Sleep(3000);
		playerHealth +=1;
		cout << "You have a burst of energy. Your health increases. You now have " << playerHealth << " left." << endl;
		cout << "Time to attack! what do you do?" << endl;
		cout << "1) Kick" << endl;
		cout << "2) Punch" << endl;
		cout << "3) Shoe attack." << endl;

		int enemyHealth = 3;
		random_device rd;

		while (enemyHealth > 0 && playerHealth > 0)
		{
			int playerChoice;
			cin >> playerChoice;
			int enemyChoice = rd() % 3;
			switch (enemyChoice)
			{
			case 0:
				cout << "The woman slaps you with a shoe." << endl;
				playerHealth--;
				cout << playerHealth << " health left." << endl;
				break;
			case 1:
				cout << "The woman slaps you." << endl;
				playerHealth--;
				cout << playerHealth << " health left." << endl;
				break;
			default:
				cout << "The woman throws her shoe but misses." << endl;
			}
			switch (playerChoice)
			{
			case 1:
				cout << "Yowza! You kick her." << endl;
				enemyHealth--;
				Sleep(500);
				break;
			case 2:
				cout << "Wallop! You punch her." << endl;
				enemyHealth--;
				Sleep(500);
				break;
			case 3:
				cout << "You attack her with her own shoe. Yoinks!" << endl;
				enemyHealth -= 2;
				Sleep(500);
				break;
			default:
				cout << "Oopsies! You trip!" << endl;
				Sleep(500);
			}

		}

		if (playerHealth <= 0)
		{
			cout << "She breaks your elbow. You are unable to work for the rest of the year. " << endl;
			return 0;
		}

		else
		{
			cout << "The woman faints" << endl;
		}

		Sleep(500);
		cout << "Your boss gets up from the ground. 'Thank you for saving me. We should probably call the police.' He said with a sigh." << endl;
		Sleep(1000);
		cout << "How do you reply? \n 1)No problem. \n 2) Heck you!" << endl; 
		cin >> answerA;
		switch (answerA)
		{
		case 1:
			cout << "'No problem.' \n" << endl;
				break;
		case 2:
			cout << "'Heck you'" << endl;
			Sleep(1000);
			cout << "He gives you a questioning look." << endl; 
			cout << "..." << endl;
			Sleep(3000);
			cout << "He then shanks you." << endl;
			cout << "You die." << endl;
			return 0;
			break;
		default: 
			cout << "You stay silent." << endl;
		}
		cout << "Your boss calls the police. You start to investigate the woman." << endl;
		cout << "..." << endl;
			Sleep(2000);
		
		cout << "You don't notice anything off about her." << endl;
		Sleep(2000);
		cout << "The woman mutters 'flash drive' in her sleep." << endl;
		Sleep(1000);
		cout << "Ah." << endl;
		Sleep(1000);
		cout << "So that is who the flashdrive belonged to." << endl;
		Sleep(2000);
		cout << "Better return to work" << endl;
		Sleep(1000);
		cout << "Just another day's work." << endl;
		return 0;


}
	
	


