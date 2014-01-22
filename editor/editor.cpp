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
	sf::Event currentEvent;

	while (_mainWindow.pollEvent(currentEvent))
	{
		switch (_editorState)
		{
			case Editor::Playing:
			{
				_mainWindow.clear(sf::Color(63,64,50));
				

				std::list<Widget>::iterator it;

				for ( it = _widgets.begin(); it != _widgets.end(); it++ )
				{
					(*it).Draw(_mainWindow);
				}

				_mainWindow.display();

				if (currentEvent.type == sf::Event::Closed)
				{
					_editorState = Editor::Exiting;
				}

				break;
			}
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