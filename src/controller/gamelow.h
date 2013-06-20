#include "map.h"
#include "../view/view.h"
#include "../model/game-objects/pacman.h"
#include "../model/game-objects/monster.h"
#include <vector>



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
		Monster * monsters[5];

		bool isLose();
		bool checkLose( Pacman * pacman, Monster * monster);
		bool isEnd( char c );
};
