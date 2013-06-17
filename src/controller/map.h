#pragma once

#include <vector>
#include "../model/game-objects/wall.h"



class Map {
	public:
		Map( int sizeX, int sizeY );
		std::vector< std::vector<Element *> > get( void );

	private:
		std::vector< std::vector<Element *> > matrix;
};
