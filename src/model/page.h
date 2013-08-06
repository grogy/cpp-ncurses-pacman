#include "../view/view.h"



/**
 * Class for view information pages
 */
class Page {
	public:
		/**
		 * Inicialize information pages
		 * @param x width area
		 * @param y height area
		 * @param view layer for view on ncurses
		 */
		Page( int x, int y, View * view );

		/**
		 * Show information page with help
		 */
		void show( void );

		/**
		 * Show page with info of win game
		 */
		void showWin( void );

		/**
		 * Show page with info of lose game
		 */
		void showLose( void );

	private:
		int x;
		int y;
		View * viewLayer;

		/**
		 * Show border for area
		 */
		void showBorder( void );

		/**
		 * Show help
		 */
		void showHelp( void );

		/**
		 * Show win
		 */
		void win( void );

		/**
		 * Show lose
		 */
		void lose( void );
};
