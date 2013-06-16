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
	viewLayer->clear();
	showElements();
	showBorder();
	int keyCode = waitingForKey();
	int state = getNewState(keyCode);

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

	viewLayer->print(x, y++, "==========================");
	viewLayer->print(x, y++, "|     === Pacman ===     |");
	viewLayer->print(x, y++, "===========================");
	viewLayer->print(x, y++, "|                        |");
	viewLayer->print(x, y++, "|   N - Easy game        |");
	viewLayer->print(x, y++, "|                        |");
	viewLayer->print(x, y++, "|   M - Difficult game   |");
	viewLayer->print(x, y++, "|                        |");
	viewLayer->print(x, y++, "|   H - Help             |");
	viewLayer->print(x, y++, "|                        |");
	viewLayer->print(x, y++, "|   Q - End              |");
	viewLayer->print(x, y++, "|                        |");
	viewLayer->print(x, y++, "==========================");
}



int Menu::waitingForKey( void )
{
	while (true) {
		char code = viewLayer->getKeyCode();
		switch (code) {
			case 104: // H
			case 109: // M
			case 110: // N
			case 113: // Q
				return code;
			default:
				continue;
		};
	}

	return 0;
}



int Menu::getNewState( int keyCode )
{
	switch (keyCode) {
		case 104:
			return 4;
		case 109:
			return 3;
		case 110:
			return 3;
		case 113:
			return 3;
		default:
			throw "Invalid key code in menu.cpp";
	}
}
