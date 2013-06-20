#include "gamelow.h"
#include <ncurses.h>



GameLow::GameLow( int x, int y, View * view, Map * map)
{
	this->x = x;
	this->y = y;
	viewLayer = view;
	this->map = map;
	pacman = new Pacman();
	for (int i = 0; i < 5; i++)
		monsters[i] = new Monster();
}



GameLow::~GameLow()
{
	delete pacman;
	for (int i = 0; i < 5; i++)
		delete monsters[i];
}



int GameLow::run( void )
{
	map->reset();
	char c;

	while (true) {
		viewLayer->print(map->get());
		viewLayer->print(pacman->getX(), pacman->getY(), pacman);

		for (int i = 0; i < 5; i++) {
			monsters[i]->move(map);
			viewLayer->print(monsters[i]->getX(), monsters[i]->getY(), monsters[i]);
		}

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
