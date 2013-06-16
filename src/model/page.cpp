// #pragma once

#include <ncurses.h>
#include "page.h"
#include "game-objects/wall.h"

using namespace std;



Page::Page( int x, int y, View * view )
{
	this->x = x;
	this->y = y;
	viewLayer = view;
}



void Page::show( void )
{
	viewLayer->clear();
	showHelp();
	showBorder();

	viewLayer->getKeyCode();
}



void Page::showBorder( void )
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



void Page::showHelp( void )
{
	int countCharWidth = 40;
	int countCharHeight = 15;
	int x = this->x / 2 - countCharWidth / 2;
	int y = this->y / 2 - countCharHeight / 2;

	viewLayer->print(x, y++, "========================================");
	viewLayer->print(x, y++, "|   ===   Help for game Pacman   ===   |");
	viewLayer->print(x, y++, "========================================");
	viewLayer->print(x, y++, "|                                      |");
	viewLayer->print(x, y++, "|   Arrows - Move left, right, ..      |");
	viewLayer->print(x, y++, "|                                      |");
	viewLayer->print(x, y++, "|   Esc - Back to menu                 |");
	viewLayer->print(x, y++, "|                                      |");
	viewLayer->print(x, y++, "|   P - Pause                          |");
	viewLayer->print(x, y++, "|                                      |");
	viewLayer->print(x, y++, "|--------------------------------------|");
	viewLayer->print(x, y++, "|                                      |");
	viewLayer->print(x, y++, "|   For back to menu press Z           |");
	viewLayer->print(x, y++, "|                                      |");
	viewLayer->print(x, y++, "========================================");
}
