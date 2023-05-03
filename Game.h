#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
#include <vector>
#include "Fonobj.h"
#include "Player.h"

class Game {
private:
	sf::RenderWindow window;
	Fonobj fon;
	Player player;
public:
	Game() {
		window.create(sf::VideoMode{ (size_t)WINDOW_WIDTH, (size_t)WINDOW_HEIGHT }, WINDOW_TITLE);
		window.setFramerateLimit(FPS);
	}
	void checkEvents() {
		sf::Event event;
		while (window.pollEvent(event))
			if (event.type == sf::Event::Closed) window.close();
	}
	void update() {
		fon.update();
		player.update();
	}
	void checkCollisions() {}
	void draw() {
		window.clear();
		window.draw(fon.getSprite());
		player.draw(window);

		window.display();
	}
	void play() {
		while (window.isOpen()) {
			checkEvents();
			update();
			checkCollisions();
			draw();
		}
	}
};