#include "../view/view.h"
#include "../model/model.h"
#include "../model/menu.h"
#include "../model/page.h"
#include "map.h"
#include "gamelow.h"



class Game {
	public:
		Game( void );
		~Game( void );
		void run( void );
		void end( void );

	private:
		View * viewLayer;
		Model * modelLayer;
		Menu * menu;
		Page * page;
		Map * map;
		GameLow * gameLow;
		int state;

		void inicializeObject( void );
};
