#include "game.h"
#include <cstddef>
#include <time.h>
#include <cstdlib>



Game::Game( void )
{
	viewLayer = NULL;
	modelLayer = NULL;
	menu = NULL;
	page = NULL;
	map = NULL;
	gameLow = NULL;

	state = 1;

	srand(time(NULL)); // pro generovani rand
}



Game::~Game( void )
{
	delete viewLayer;
	delete modelLayer;
	delete menu;
	delete page;
	delete map;
	delete gameLow;
}



void Game::inicializeObject( void )
{
	viewLayer = new View();
	viewLayer->inicialize();

	int sizeX = viewLayer->getSizeX();
	int sizeY = viewLayer->getSizeY();

	modelLayer = new Model(sizeX, sizeY);
	menu = new Menu(sizeX, sizeY, viewLayer);
	page = new Page(sizeX, sizeY, viewLayer);
	map = new Map(sizeX, sizeY);
	gameLow = new GameLow(sizeX, sizeY, viewLayer, map);
}



void Game::run( void )
{
	int x = viewLayer->getSizeX();
	int y = viewLayer->getSizeY();

	while (true) {
		switch (state) {
			// inicialize game
			case 1:
				inicializeObject();
				state = 2;
				break;

			// show menu
			case 2:
				state = menu->show();
				break;

			// quit game
			case 3:
				return;
				break;

			// show info page (help)
			case 4:
				page->show();
				state = 2;
				break;

			// run easy game
			case 5:
				state = gameLow->run();
				break;

			// run difficult game
			case 6:
				// not implement
				break;

			// win
			case 7:
				page->showWin();
				state = 2;
				break;

			// lose
			case 8:
				page->showLose();
				state = 2;
				break;

			default:
				return;
				throw "Undefined state of game automat.";
		}
	}
}



void Game::end( void )
{
	viewLayer->remove();
}
