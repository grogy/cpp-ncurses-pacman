#include <vector>



class Model {
	public:
		Model( int sizeX, int sizeY );
		std::vector< std::vector<int> > get( void );
		void set( int x, int y, int value );
	private:
		std::vector< std::vector<int> > matrix;
};
