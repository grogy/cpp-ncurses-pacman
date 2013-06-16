#include "game.h"
#include <cstddef>



Game::Game( void )
{
	viewLayer = NULL;
	modelLayer = NULL;
	menu = NULL;
	page = NULL;

	state = 1;
}



Game::~Game( void )
{
	delete viewLayer;
	delete modelLayer;
	delete menu;
	delete page;
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
}



void Game::run( void )
{
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
				
				break;

			// run difficult game
			case 6:
				
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
