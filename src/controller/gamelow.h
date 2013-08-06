#include "map.h"
#include "../view/view.h"
#include "../model/game-objects/pacman.h"
#include "../model/game-objects/monster.h"
#include <vector>



/**
 * Class with logic of game
 */
class GameLow {
	public:
		/**
		 * Inicialize game with size of area and depends
		 * @param x width of area
		 * @param y height of area
		 * @param view layer for view program on terminal
		 * @param map area of game
		 */
		GameLow( int x, int y, View * view, Map * map );

		~GameLow();

		/**
		 * Run game
		 * @return state of complet program
		 */
		int run( void );

	private:
		int x;
		int y;
		View * viewLayer;
		Map * map;
		Pacman * pacman;
		Monster * monsters[5];

		/**
		 * Test lose game
		 */
		bool isLose();

		/**
		 * Test lose game - pacman vs. concrete monster
		 */
		bool checkLose( Pacman * pacman, Monster * monster);

		/**
		 * Test win game
		 */
		bool isEnd( char c );
};
