#include "../view/view.h"
#include "../model/model.h"
#include "../model/menu.h"
#include "../model/page.h"
#include "map.h"
#include "gamelow.h"



/**
 * Base class - run and close game (complet program)
 */
class Game {
	public:
		Game( void );
		~Game();

		/**
		 * Run game
		 */
		void run( void );

		/**
		 * Close game
		 */
		void end( void );

	private:
		View * viewLayer;
		Model * modelLayer;
		Menu * menu;
		Page * page;
		Map * map;
		GameLow * gameLow;
		int state;

		/**
		 * Method for inicialize depends objects
		 */
		void inicializeObject( void );
};
