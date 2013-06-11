#include "../model/game-objects/element.h"
#include <vector>



class View {
	public:
		// (de) inicialize
		void inicialize( void );
		void remove( void );

		// print
		void print( int x, int y, char c );
		void print( std::vector< std::vector<Element*> > matrix );

		// getters
		char getKeyCode( void );
		char getKeyCodeNoDelay( void );
		int getSizeX( void );
		int getSizeY( void );

		// debugs
		void printDebug( char * c );
		void printDebug( int i );
};
