#pragma once

#include "../model/game-objects/element.h"
#include <vector>
#include <string>



class View {
	public:
		// (de) inicialize
		void inicialize( void );
		void remove( void );

		// print
		void print( int x, int y, char c );
		void print( int x, int y, Element * e );
		void print( std::vector< std::vector<Element*> > matrix );
		void print( int x, int y, std::string str );

		// base function
		void clear( void );

		// getters
		char getKeyCode( void );
		char getKeyCodeNoDelay( void );
		int getSizeX( void );
		int getSizeY( void );

		// debugs
		void printDebug( char * c );
		void printDebug( int i );
};
