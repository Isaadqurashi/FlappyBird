#include <SFML/Graphics.hpp>
#include<iostream>

#define SCREEN_WIDTH 1680
#define SCREEN_HEIGHT 1024

int main() {
	sf::RenderWindow window( sf::VideoMode( SCREEN_WIDTH, SCREEN_HEIGHT),"Flappy Bird");

	while (window.isOpen())
	{
		//handle input/event
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		// updated game logic
		window.clear();

		//draw objects

		window.display();
	}
	return EXIT_SUCCESS;
}