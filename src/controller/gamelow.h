#include "map.h"
#include "../view/view.h"



class GameLow {
	public:
		GameLow( int x, int y, View * view, Map * map );
		int run( void );

	private:
		int x;
		int y;
		View * viewLayer;
		Map * map;

		void setupGame( void );
};
