#include "controller/game.h"
#include <iostream>
using namespace std;



int main( void )
{
	try {
		Game game = Game();
		game.run();
		game.end();
	} catch (const char * s) {
		cerr << s << endl;
		return 1;
	}

	return 0;
}
