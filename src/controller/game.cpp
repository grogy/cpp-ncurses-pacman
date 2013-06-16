#include "game.h"
#include <cstddef>



Game::Game( void )
{
	viewLayer = NULL;
	modelLayer = NULL;
	menu = NULL;

	state = 1;
}



Game::~Game( void )
{
	delete viewLayer;
	delete modelLayer;
	delete menu;
}



void Game::inicializeObject( void )
{
	viewLayer = new View();
	viewLayer->inicialize();

	int sizeX = viewLayer->getSizeX();
	int sizeY = viewLayer->getSizeY();
	modelLayer = new Model(sizeX, sizeY);

	menu = new Menu(sizeX, sizeY, viewLayer);
}



void Game::run( void )
{
	while (true) {
		switch (state) {
			case 1:
				inicializeObject();
				state = 2;
				break;
			case 2:
				state = menu->show();
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			case 5:
				
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
