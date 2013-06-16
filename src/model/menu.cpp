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
	int countCharWidth = 27;
	int countCharHeight = 13;
	int x = this->x / 2 - countCharWidth / 2;
	int y = this->y / 2 - countCharHeight / 2;

	viewLayer->print(x, y++, "===========================");
	viewLayer->print(x, y++, "|      === Pacman ===     |");
	viewLayer->print(x, y++, "===========================");
	viewLayer->print(x, y++, "|                         |");
	viewLayer->print(x, y++, "|   F5 - Easy game        |");
	viewLayer->print(x, y++, "|                         |");
	viewLayer->print(x, y++, "|   F6 - Difficult game   |");
	viewLayer->print(x, y++, "|                         |");
	viewLayer->print(x, y++, "|   F1 - Help             |");
	viewLayer->print(x, y++, "|                         |");
	viewLayer->print(x, y++, "|   F3 - End              |");
	viewLayer->print(x, y++, "|                         |");
	viewLayer->print(x, y++, "===========================");
}



int Menu::waitingForKey( void )
{
	return viewLayer->getKeyCode();
}
