#pragma once

#include "../model/game-objects/element.h"
#include <vector>
#include <string>



/**
 * Class for communicate with ncurses library (OO API)
 */
class View {
	public:
		/**
		 * Inicialize area (window)
		 */
		void inicialize( void );

		/**
		 * Deinicialize area
		 */
		void remove( void );

		/**
		 * Print char
		 * @param x horizontal position
		 * @param y vertical position
		 * @param c char for print
		 */
		void print( int x, int y, char c );
		
		/**
		 * Print element
		 * @param x horizontal position
		 * @param y vertical position
		 * @param e element of game objects for view
		 */
		void print( int x, int y, Element * e );

		/**
		 * Print matrix
		 * @param matrix matrix for view
		 */
		void print( std::vector< std::vector<Element*> > matrix );

		/**
		 * Print string
		 * @param x horizontal position
		 * @param y vertical position
		 * @param str string for view
		 */
		void print( int x, int y, std::string str );

		/**
		 * Clear complet window
		 */
		void clear( void );
		
		/**
		 * Sleep for game loop
		 * @param microsec count microsec
		 */
		void sleep( int microsec );

		/**
		 * Get code of key press - wait for press
		 * @return key code
		 */
		char getKeyCode( void );

		/**
		 * Get code of key press - no wait for press
		 * @return key code or -1 for no press
		 */
		char getKeyCodeNoDelay( void );

		/**
		 * Get width area
		 * @return width
		 */
		int getSizeX( void );

		/**
		 * Get height area
		 * @return height
		 */
		int getSizeY( void );

		/**
		 * Print for debug
		 * @param c char for view
		 */
		void printDebug( char * c );

		/**
		 * Print for debug
		 * @param i int for view
		 */
		void printDebug( int i );
};
