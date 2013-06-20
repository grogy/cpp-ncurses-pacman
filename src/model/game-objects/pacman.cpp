#include "pacman.h"



Pacman::Pacman()
{
	state = 0;
	x = 1;
	y = 1;
}



char Pacman::getInterpretation( void )
{
	state = ++state % 2;

	if (state == 0)
		return 'C';
	else
		return 'G';
}



char Pacman::getType( void )
{
	return 'p';
}



int Pacman::getX()
{
	return x;
}



int Pacman::getY()
{
	return y;
}



void Pacman::move(char c, Map * map)
{
	int actualX = this->x;
	int actualY = this->y;

	switch (c) {
		// nahoru
		case 65:
			actualY--;
			break;

		// dolu
		case 66:
			actualY++;
			break;

		// doleva
		case 68:
			actualX--;
			break;

		// doprava
		case 67:
			actualX++;
			break;

		default:
			break;
	}

	if (!map->isValidPosition(actualX, actualY))
		return;

	this->x = actualX;
	this->y = actualY;
}
