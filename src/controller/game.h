#include "../view/view.h"
#include "../model/model.h"



class Game {
	public:
		Game();
		~Game();
		void run();
		void end();
	private:
		View * viewLayer;
		Model * modelLayer;

		void inicializeObject();
		void inicializeGame();
};
