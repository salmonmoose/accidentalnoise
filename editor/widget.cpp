#include "widget.h"

Widget::Widget() 
{
	_position = sf::Vector2f(200,200);
	_size = sf::Vector2f(320,200);
	_clicked = false;
	_color = sf::Color(222,229,179);
	_color2 = sf::Color(246,255,199);
}

void Widget::Update() {}	

void Widget::Draw(sf::RenderWindow &window)
{
	sf::RectangleShape rectangle;

	rectangle.setPosition(_position);
	rectangle.setSize(_size);
	rectangle.setOutlineColor(_color);
	rectangle.setFillColor(_color);
	rectangle.setOutlineThickness(1);

	window.draw(rectangle);
}

void Widget::HandleEvent(sf::Event &event)
{
	switch (event.type)
	{
		case sf::Event::MouseButtonPressed:
			_color = _color2;

			if (event.mouseButton.button == sf::Mouse::Left)
			{
				if (event.mouseButton.x > _position.x && 
					event.mouseButton.x < _position.x + _size.x &&
					event.mouseButton.y > _position.y &&
					event.mouseButton.y < _position.y + _size.y)
				{
					_clicked = true;
				}
			}
			break;
		case sf::Event::KeyPressed:
			break;
	}
}

Widget::~Widget() {}