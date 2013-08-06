#pragma once

#include <vector>
#include "../model/game-objects/wall.h"
#include "../model/game-objects/coin.h"



/**
 * Class for interpretation game area
 */
class Map {
	public:
		/**
		 * Inicialize game area
		 * @param sizeX width area
		 * @param sizeY height area
		 */
		Map( int sizeX, int sizeY );

		~Map();

		/**
		 * Get map
		 * @return map (interpretation on vector of vector)
		 */
		std::vector< std::vector<Element *> > get( void );

		/**
		 * Reset area for new game
		 */
		void reset( void );

		/**
		 * Get width area
		 */
		int getSizeX( void );

		/**
		 * Get height area
		 */
		int getSizeY( void );

		/**
		 * Control validate area for move
		 * @param x coordinate width
		 * @param y coordinate height
		 */
		bool isValidPosition( int x, int y );

		/**
		 * Remove coin from area
		 */
		void removeCoin( int x, int y );

		/**
		 * Check win (on area in't all coin)
		 */
		bool isWin( void );

	private:
		int x;
		int y;
		std::vector< std::vector<Element *> > matrix;
};
