#include "../view/view.h"



/**
 * Class for view menu
 */
class Menu {
	public:
		/**
		 * Inicialize menu
		 * @param x width area
		 * @param y height area
		 * @param view layer for view game in terminal
		 */
		Menu( int x, int y, View * view );

		/**
		 * Show menu
		 * @return new state of game
		 */
		int show( void );

	private:
		int x;
		int y;
		View * viewLayer;

		/**
		 * Show border on area
		 */
		void showBorder( void );

		/**
		 * Show elementare elements of menu
		 */
		void showElements( void );

		/**
		 * Check key press (wait for press)
		 * @return key code
		 */
		int waitingForKey( void );

		/**
		 * Get new state of game
		 * @return new state of game
		 */
		int getNewState( int keyCode );
};
