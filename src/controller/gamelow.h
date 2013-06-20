#include "map.h"
#include "../view/view.h"
#include "../model/game-objects/pacman.h"
#include "../model/game-objects/monster.h"
#include <vector>



class GameLow {
	public:
		/**
		 * Inicializuje samotnou hru pomoci velikosti plochy a potrebnych zavislosti
		 * @param x velikost plochy na sirku
		 * @param y velikost plochy na vysku
		 * @param view vrstva zajistujici vykreslovani v nCurses
		 * @param map mapa herni plochy
		 */
		GameLow( int x, int y, View * view, Map * map );

		~GameLow();

		/**
		 * Spusti hru
		 * @return vrati stav programu (pro moznost zobrazeni vyhry / prohry / menu)
		 */
		int run( void );

	private:
		int x;
		int y;
		View * viewLayer;
		Map * map;
		Pacman * pacman;
		Monster * monsters[5];

		/**
		 * Testuje, zda hrac prohral
		 */
		bool isLose();

		/**
		 * Pomocna metoda pro otestovani postavy s danym monstrem
		 */
		bool checkLose( Pacman * pacman, Monster * monster);

		/**
		 * Testuje zda byla hra uspesne dohrana (dosbirany mince)
		 */
		bool isEnd( char c );
};
