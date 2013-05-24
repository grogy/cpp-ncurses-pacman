#include "map.h"



Map::Map( int sizeX, int sizeY )
{
	for (int i = 0; i < sizeX; i++) {
		matrix.push_back(std::vector<Element>());
	}

	for (int i = 0; i < sizeX; i++)
		for (int j = 0; j < sizeX; j++)
			matrix[i].push_back(0);
}



Map::setWall()
{
	for (int i = 0; i < sizeX; i++)
		for (int j = 0; j < sizeX; j++)
			matrix[i].push_back(new Wall());
}



std::vector< std::vector<Element> > Map::generate( void )
{
	setWall();

	return matrix;
}
