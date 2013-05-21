#include "model.h"
#include <vector>



Model::Model( int sizeX, int sizeY )
{
	for (int i = 0; i < sizeX; i++) {
		matrix.push_back(std::vector<int>());
	}

	for (int i = 0; i < sizeX; i++)
		for (int j = 0; j < sizeX; j++)
			matrix[i].push_back(0);
}



std::vector< std::vector<int> > Model::get( void )
{
	return matrix;
}



void Model::set( int x, int y )
{
	// matrix[x][y] = 50;
}
