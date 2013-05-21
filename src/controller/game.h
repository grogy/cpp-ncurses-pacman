#include "../view/view.h"
#include "../model/model.h"



class Game {
	public:
		Game( void );
		~Game( void );
		void run( void );
		void end( void );
	private:
		View * viewLayer;
		Model * modelLayer;

		void inicializeObject();
		void inicializeGame();
};
