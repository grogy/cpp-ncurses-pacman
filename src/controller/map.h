#pragma once

#include <vector>
#include "../model/game-objects/wall.h"
#include "../model/game-objects/coin.h"



class Map {
	public:
		/**
		 * Inicializuje mapu
		 * @param sizeX velikost na sirku
		 * @param sizeY velikost na vysku
		 */
		Map( int sizeX, int sizeY );

		/**
		 * Preda mapu
		 * @return mapa jako vector
		 */
		std::vector< std::vector<Element *> > get( void );

		/**
		 * Zresetuje nastaveni mapy pro novou hru
		 */
		void reset( void );

		/**
		 * Vrati sirku mapy
		 */
		int getSizeX( void );

		/**
		 * Vrati vysku mapy
		 */
		int getSizeY( void );

		/**
		 * Zkontroluje, zda muze postava / monstrum na dane policko
		 * @param x souradnice sirky
		 * @param y souradnice vysky
		 */
		bool isValidPosition( int x, int y );

		/**
		 * Odstrani minci (po nastoupeni pacmana na pole)
		 */
		void removeCoin( int x, int y );

		/**
		 * Zkontroluje vyhru - zda jsou posbirany vsechny mince
		 */
		bool isWin( void );

	private:
		int x;
		int y;
		std::vector< std::vector<Element *> > matrix;
};
