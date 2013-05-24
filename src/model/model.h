#include "game-objects/element.h"
#include <vector>



class Model {
	public:
		Model( int sizeX, int sizeY );
		std::vector< std::vector<Element*> > get( void );
		void set( int x, int y, Element * value );
	private:
		std::vector< std::vector<Element*> > matrix;
};
