#include "controller/game.h"
#include <iostream>
using namespace std;



/**
 * Start game
 */
int main( void )
{
	try {
		Game * game = new Game();
		game->run();
		game->end();
		delete game;
	} catch (const char * s) {
		cerr << s << endl;
		return 1;
	}

	return 0;
}
