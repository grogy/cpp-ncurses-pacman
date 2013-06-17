#pragma once

#include <vector>
#include "../model/game-objects/wall.h"
#include "../model/game-objects/coin.h"



class Map {
	public:
		Map( int sizeX, int sizeY );
		std::vector< std::vector<Element *> > get( void );
		void reset( void );

	private:
		int x;
		int y;
		std::vector< std::vector<Element *> > matrix;
};
