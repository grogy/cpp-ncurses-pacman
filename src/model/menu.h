#include "../view/view.h"



class Menu {
	public:
		Menu( int x, int y, View * view );
		int show( void );

	private:
		int x;
		int y;
		View * viewLayer;

		void showBorder( void );
		void showElements( void );
		int waitingForKey( void );
		int getNewState( int keyCode );
};
