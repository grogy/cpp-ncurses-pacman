// #pragma once

#include <ncurses.h>
#include "menu.h"
#include "game-objects/wall.h"

using namespace std;



Menu::Menu( int x, int y, View * view )
{
	this->x = x;
	this->y = y;
	viewLayer = view;
}



int Menu::show( void )
{
	showBorder();
	showElements();
	int state = waitingForKey();

	return state;
}



void Menu::showBorder( void )
{
	Element * w = new Wall();

	for (int i = 0; i < x; i++) {
		viewLayer->print(i, 0, w);
		viewLayer->print(i, y-1, w);
	}

	for (int i = 0; i < y; i++) {
		viewLayer->print(0, i, w);
		viewLayer->print(x-1, i, w);
	}
}



void Menu::showElements( void )
{
	viewLayer->print(12, 7, "F5 - Easy game");
	viewLayer->print(12, 9, "F6 - Difficult game");
	viewLayer->print(12, 11, "F1 - Help");
	viewLayer->print(12, 13, "F3 - End");
}



int Menu::waitingForKey( void )
{
	return viewLayer->getKeyCode();
}
