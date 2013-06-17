#include "map.h"



Map::Map( int sizeX, int sizeY )
{
	for (int i = 0; i < sizeX; i++) {
		matrix.push_back(std::vector<Element *>());
	}

	for (int i = 0; i < sizeX; i++)
		for (int j = 0; j < sizeY; j++) {
			Element * e = new Wall();
			matrix[i].push_back(e);
		}
}



std::vector< std::vector<Element *> > Map::get( void )
{
	return matrix;
}
