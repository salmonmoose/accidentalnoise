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
	sf::Vector2f _position_offset;
	sf::Vector2f _size;
	bool _clicked;
	bool _dragging;
	sf::Vector2u _clickStart;
	sf::Color _color;

	const sf::Color _theme_background = sf::Color(63,64,50);
	const sf::Color _theme_forground  = sf::Color(246,256,199);
	const sf::Color _theme_button    = sf::Color(122,177,99);
	const sf::Color _theme_hilight    = sf::Color(222,229,179);
	const sf::Color _theme_misc       = sf::Color(186,191,149);
};