#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
using namespace std;

class Cvijet
{
private:
	sf::CircleShape bud;
	sf::CircleShape sun;
	sf::CircleShape seed;
	sf::CircleShape leaf[2];
	sf::RectangleShape stem;

public:
	Cvijet(sf::RenderWindow* window);

	void set_bud();
	void set_seed();
	void set_leaf();
	void set_stem();
	void set_sun();
	void draw(sf::RenderWindow* window);
};