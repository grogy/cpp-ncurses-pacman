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
		map->removeCoin(pacman->getX(), pacman->getY());
		if (isLose())
			return 8;
		viewLayer->print(map->get());
		viewLayer->print(pacman->getX(), pacman->getY(), pacman);

		for (int i = 0; i < 5; i++) {
			monsters[i]->move(map);
			viewLayer->print(monsters[i]->getX(), monsters[i]->getY(), monsters[i]);
		}
		if (isLose())
			return 8;

		// viewLayer->sleep(10000000);
		c = viewLayer->getKeyCode(); // NoDelay

		if (map->isWin())
			return 7;

		if (isEnd(c))
			return 2;

		pacman->move(c, map);
	}

	return 2;
}



bool GameLow::isEnd( char c )
{
	if (c == 'q')
		return true;
	return false;
}



bool GameLow::checkLose( Pacman * p, Monster * m)
{
	if (p->getX() == m->getX() && p->getY() == m->getY())
		return true;
	return false;
}



bool GameLow::isLose()
{
	for (int i = 0; i < 5; i++) {
		if (checkLose(pacman, monsters[i]))
			return true;
	}

	return false;
}
