#include "../view/view.h"
#include "../model/model.h"
#include "../model/menu.h"
#include "../model/page.h"
#include "map.h"
#include "gamelow.h"



/**
 * Zakladni trida spoustejici a ukoncujici hru jako cely program
 */
class Game {
	public:
		Game( void );
		~Game( void );

		/**
		 * Spoustec hry
		 */
		void run( void );

		/**
		 Ukonceni hry (programu)
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
		 * Metoda zajistujici inicializaci objektu
		 */
		void inicializeObject( void );
};
