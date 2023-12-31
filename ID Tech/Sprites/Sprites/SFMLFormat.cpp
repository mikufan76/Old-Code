// SFMLFormat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 780), "Sprites!");
	sf::Texture playerTex;
	playerTex.loadFromFile("Textures/player_ship.png");
	sf::Sprite playerSprite;
	playerSprite.setTexture(playerTex);
	playerSprite.setOrigin(32, 32);
	playerSprite.setScale(1.5, 1.5);
	playerSprite.setPosition(100, 100);

	bool movingUp = false;
	bool movingDown = false;
	bool movingLeft = false;
	bool movingRight = false;
	

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::W)
				{
					movingUp = true;

				}
				if (event.key.code == sf::Keyboard::S)
				{
					movingDown = true;
				}
				if (event.key.code == sf::Keyboard::A)
				{
					movingLeft = true;
				}
				if (event.key.code == sf::Keyboard::D)
				{
					movingRight = true;
				}
			}
			//Expand for Keyreleased code.
			if (event.type == sf::Event::KeyReleased)
			{
				if (event.key.code == sf::Keyboard::W)
				{
					movingUp = false;
				}
				if (event.key.code == sf::Keyboard::S)
				{
					movingDown = false;
				}
				if (event.key.code == sf::Keyboard::A)
				{
					movingLeft = false;
				}
				if (event.key.code == sf::Keyboard::D)
				{
					movingRight = false;
				}

			}
		}
		
		sf::Vector2f movement(0, 0);
		if (movingUp)
			movement.y -= 0.1f;
		if (movingDown)
			movement.y += 0.1f;
		if (movingRight)
			movement.x += 0.1f;
		if (movingLeft)
			movement.x -= 0.1f;

		playerSprite.move(movement);

		window.clear();
		window.draw(playerSprite);
		window.display();
	}
}