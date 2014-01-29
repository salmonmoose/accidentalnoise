#include "widget.h"

Widget::Widget() 
{
	_position = sf::Vector2f(100, 100);
	_position_offset = sf::Vector2f(0, 0);
	_size = sf::Vector2f(150, 150);
	_clicked = false;
	_dragging = false;
	_color = _theme_button;
}

void Widget::Update() {}	

void Widget::Draw(sf::RenderWindow &window)
{
	sf::RectangleShape rectangle;

	if (_dragging) {
		rectangle.setPosition(_position + _position_offset);	
	} else {
		rectangle.setPosition(_position);
	}
	
	rectangle.setSize(_size);
	rectangle.setFillColor(_color);
	rectangle.setOutlineThickness(0);

	window.draw(rectangle);
}

void Widget::HandleEvent(sf::Event &event)
{
	switch (event.type)
	{
		case sf::Event::MouseButtonPressed:
			if (event.mouseButton.button == sf::Mouse::Left)
			{
				if (event.mouseButton.x > _position.x && 
					event.mouseButton.x < _position.x + _size.x &&
					event.mouseButton.y > _position.y &&
					event.mouseButton.y < _position.y + _size.y)
				{
					_clicked = true;
					_clickStart.x = event.mouseButton.x;
					_clickStart.y = event.mouseButton.y;
					_color = _theme_hilight;
				}
			}

			break;

		case sf::Event::MouseButtonReleased:
			if(event.mouseButton.button == sf::Mouse::Left)
			{
				if (_clicked)
				{
					_clicked = false;
					_color = _theme_button;
					if (_dragging)
					{
						_position += _position_offset;
					}
					_dragging = false;
				}
			}

			break;

		case sf::Event::MouseMoved:
			if (_clicked)
			{
				_position_offset.x = event.mouseMove.x - _clickStart.x;
				_position_offset.y = event.mouseMove.y - _clickStart.y;

				if (!_dragging)
				{
					float distance = sqrt(_position_offset.x * _position_offset.x + _position_offset.y * _position_offset.y);

					if (distance > 5)
					{
						_dragging = true;
					}
				}
			}

		case sf::Event::KeyPressed:
			switch (event.key.code)
			{ }
			
			break;
	}
}

Widget::~Widget() {}