#include "widget.h"

Widget::Widget() 
{
	_position = sf::Vector2f(200,200);
	_size = sf::Vector2f(320,200);
}

void Widget::Update() {}	

void Widget::Draw(sf::RenderWindow &window)
{
	sf::RectangleShape rectangle;

	rectangle.setPosition(_position);
	rectangle.setSize(_size);
	rectangle.setOutlineColor(sf::Color(222,229,179));
	rectangle.setOutlineThickness(1);

	window.draw(rectangle);
}

Widget::~Widget() {}