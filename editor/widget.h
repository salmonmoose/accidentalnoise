#pragma once
#include "SFML/Graphics.hpp"

class Widget
{
public:
	Widget();
	virtual ~Widget();

	virtual void Update();
	virtual void Draw(sf::RenderWindow &window);
	virtual void HandleEvent(sf::Event &event); 

private:
	sf::Vector2f _position;
	sf::Vector2f _size;
	bool _clicked;
	sf::Color _color;
	sf::Color _color2;
};