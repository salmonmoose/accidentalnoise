#include "editor.h"

//http://www.gamefromscratch.com/page/Game-from-Scratch-CPP-Edition-Part-2.aspx

void Editor::Start(void)
{
	if (_editorState != Uninitialized) return;

	_mainWindow.create(sf::VideoMode(1024, 768, 32), "Accidental Noise");
	_editorState = Editor::Playing;

	Widget test;

	_widgets.push_back(test);

	while (!IsExiting())
	{
		EditorLoop();
	}

	_mainWindow.close();
}

bool Editor::IsExiting()
{
	if (_editorState == Editor::Exiting)
		return true;
	else
		return false;
}

void Editor::EditorLoop()
{
	sf::Event event;

	switch (_editorState)
	{
		case Editor::Playing:
		{
			std::list<Widget>::iterator it;

			while (_mainWindow.pollEvent(event))
			{
				for ( it = _widgets.begin(); it != _widgets.end(); it++ )
				{
					(*it).HandleEvent(event);
				}

				if (event.type == sf::Event::Closed)
				{
					_editorState = Editor::Exiting;
				}

				if (event.type == sf::Event::KeyPressed)
				{
					if (event.key.code == sf::Keyboard::Escape)
					{
						_editorState = Editor::Exiting;
					}
				}

				if (event.type == sf::Event::Resized)
				{
					_mainWindow.setView(sf::View(sf::FloatRect(0, 0, event.size.width, event.size.height)));
				}
			}

			_mainWindow.clear(sf::Color(63,64,50));

			for ( it = _widgets.begin(); it != _widgets.end(); it++ )
			{
				(*it).Update();
			}

			for ( it = _widgets.begin(); it != _widgets.end(); it++ )
			{
				(*it).Draw(_mainWindow);
			}

			_mainWindow.display();

			break;
		}
	}
}

Editor::EditorState Editor::_editorState = Uninitialized;
sf::RenderWindow Editor::_mainWindow;

/**

background: 63,64,50
foreground: 246,256,199
buttons: 122,127,99
hilight: 222,229,179
misc: 186,191,149

*/