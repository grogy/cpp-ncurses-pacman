#include "../view/view.h"
#include "../model/model.h"
#include "../model/menu.h"



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

		void inicializeObject();
		void inicializeGame();
		void showMenu();
};
