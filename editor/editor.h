#pragma once
#include <list>
#include "SFML/Graphics.hpp"

#include "widget.h"

class Editor
{

public:
	void Start();

private:
	static bool IsExiting();
	void EditorLoop();

	enum EditorState { Uninitialized, Playing, Exiting };

	static EditorState _editorState;
	static sf::RenderWindow _mainWindow;

	std::list<Widget> _widgets;
};