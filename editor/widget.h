#pragma once
#include "SFML/Graphics.hpp"

class Widget
{
public:
	Widget();
	virtual ~Widget();

	virtual void Update();
	virtual void Draw(sf::RenderWindow &window);

private:
	sf::Vector2f _position;
	sf::Vector2f _size;
};