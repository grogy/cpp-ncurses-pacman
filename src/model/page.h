#include "../view/view.h"



class Page {
	public:
		Page( int x, int y, View * view );
		void show( void );
		void showWin( void );
		void showLose( void );

	private:
		int x;
		int y;
		View * viewLayer;

		void showBorder( void );
		void showHelp( void );
		void win( void );
		void lose( void );
};
