#include "monster.h"
#include <cstdlib>



Monster::Monster()
{
	x = 20; // todo - umisteni random?
	y = 1;
}



char Monster::getInterpretation( void )
{
	return 'W';
}



char Monster::getType( void )
{
	return 'm';
}



int Monster::getX()
{
	return x;
}



int Monster::getY()
{
	return y;
}



void Monster::move(Map * map)
{
	// int random = rand() % 4; // random
	// if (random < 0)
	// 	random = -1 * random;
	int random = 3;

	while (true) {
		if (map->isValidPosition(x, y - 1)) {
			random--;
			if (random == 0) {
				y = y - 1;
				return;
			}
		}

		if (map->isValidPosition(x, y + 1)) {
			random--;
			if (random == 0) {
				y = y + 1;
				return;
			}
		}

		if (map->isValidPosition(x - 1, y)) {
			random--;
			if (random == 0) {
				x = x - 1;
				return;
			}
		}

		if (map->isValidPosition(x + 1, y)) {
			random--;
			if (random == 0) {
				x = x + 1;
				return;
			}
		}
	}
}
