#include "game-objects/wall.h"
#include <vector>



class Model {
	public:
		Model( int sizeX, int sizeY );
		std::vector< std::vector<Element*> > get( void );
		void set( int x, int y, Element * value );
	private:
		int x;
		int y;
		std::vector< std::vector<Element*> > matrix;
};
