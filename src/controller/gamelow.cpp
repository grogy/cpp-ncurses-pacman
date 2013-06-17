#include "gamelow.h"
#include <ncurses.h>



GameLow::GameLow( int x, int y, View * view, Map * map)
{
	this->x = x;
	this->y = y;
	viewLayer = view;
	this->map = map;
}



int GameLow::run( void )
{
	setupGame();
	map->reset();

	viewLayer->print(map->get());
	// while (true) {
	// 	viewLayer->print(map->get());
	// 	//timeout(300000);
	// 	//break;
	// }
	viewLayer->getKeyCode();

	return 2;
}



void GameLow::setupGame( void )
{
	// nastav panacky na prvni pozice
}
