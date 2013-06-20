#include "gamelow.h"
#include <ncurses.h>



GameLow::GameLow( int x, int y, View * view, Map * map)
{
	this->x = x;
	this->y = y;
	viewLayer = view;
	this->map = map;
	pacman = new Pacman();
}



GameLow::~GameLow()
{
	delete pacman;
}



int GameLow::run( void )
{
	map->reset();
	char c;

	while (true) {
		viewLayer->print(map->get());
		viewLayer->print(pacman->getX(), pacman->getY(), pacman);
		// viewLayer->sleep(10000000);
		c = viewLayer->getKeyCode(); // NoDelay
		pacman->move(c, map);

		if (isEnd(c))
			return 2;
	}

	return 2;
}



bool GameLow::isEnd( char c )
{
	if (c == 'q')
		return true;
	else
		return false;
}
