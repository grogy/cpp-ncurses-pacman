#include "model.h"
#include <vector>



Model::Model( int sizeX, int sizeY )
{
	x = sizeX;
	y = sizeY;

	for (int i = 0; i < sizeX; i++) {
		matrix.push_back(std::vector<Element*>());
	}

	for (int i = 0; i < sizeX; i++)
		for (int j = 0; j < sizeX; j++) {
			Element * e = new Wall();
			matrix[i].push_back(e);
		}
}



std::vector< std::vector<Element*> > Model::get( void )
{
	return matrix;
}



void Model::set( int x, int y, Element * value )
{
	matrix[x][y] = value;
}
