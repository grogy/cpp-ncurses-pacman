#include "map.h"
#include "../view/view.h"
#include "../model/game-objects/pacman.h"



class GameLow {
	public:
		GameLow( int x, int y, View * view, Map * map );
		~GameLow();
		int run( void );

	private:
		int x;
		int y;
		View * viewLayer;
		Map * map;
		Pacman * pacman;

		bool isEnd( char c );
};
