#pragma once

#include <vector>
#include "../model/game-objects/wall.h"
#include "../model/game-objects/coin.h"



class Map {
	public:
		Map( int sizeX, int sizeY );
		std::vector< std::vector<Element *> > get( void );
		void reset( void );
		int getSizeX( void );
		int getSizeY( void );
		bool isValidPosition( int x, int y );
		void removeCoin( int x, int y );

	private:
		int x;
		int y;
		std::vector< std::vector<Element *> > matrix;
};
