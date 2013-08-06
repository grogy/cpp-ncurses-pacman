#include "map.h"
#include "../model/game-objects/none.h"



Map::Map( int sizeX, int sizeY )
{
	x = sizeX;
	y = sizeY;

	for (int i = 0; i < sizeX; i++) {
		matrix.push_back(std::vector<Element *>());
	}

	for (int i = 0; i < sizeX; i++) {
		for (int j = 0; j < sizeY; j++) {
			Element * e = new Wall();
			matrix[i].push_back(e);
		}
	}
}



Map::~Map()
{
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			delete matrix[i][j];
}



void Map::reset( void )
{
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			delete matrix[i][j];
			Element * e = new Wall();
			matrix[i][j] = e;
		}
	}

	for (int i = 1; i < y - 1; i = i+2) {
		for (int j = 1; j < x - 1; j++) {
			delete matrix[j][i];
			Element * e = new Coin();
			matrix[j][i] = e;
		}
	}

	for (int i = 1; i < y - 1; i++) {
		delete matrix[1][i];
		Element * e = new Coin();
		matrix[1][i] = e;

		delete matrix[x/3][i];
		Element * e2 = new Coin();
		matrix[x/3][i] = e2;

		delete matrix[x/3 * 2][i];
		Element * e3 = new Coin();
		matrix[x/3 * 2][i] = e3;

		delete matrix[x-2][i];
		Element * e4 = new Coin();
		matrix[x-2][i] = e4;
	}
}



std::vector< std::vector<Element *> > Map::get( void )
{
	return matrix;
}



int Map::getSizeX( void )
{
	return x;
}



int Map::getSizeY( void )
{
	return y;
}



bool Map::isValidPosition( int x, int y )
{
	if (x < 0 || y < 0)
		return false;

	if (this->x < x || this->y < y)
		return false;

	char type = matrix[x][y]->getType();
	if (type != 'c' && type != 'n')
		return false;

	return true;
}



void Map::removeCoin( int x, int y )
{
	if (matrix[x][y]->getType() == 'c') {
		delete matrix[x][y];
		matrix[x][y] = new None();
	}
}



bool Map::isWin( void )
{
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (matrix[i][j]->getType() == 'c')
				return false;
		}
	}

	return true;
}
