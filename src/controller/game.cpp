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

	int sizeX = viewLayer->getSizeX();
	int sizeY = viewLayer->getSizeY();
	modelLayer = new Model(sizeX, sizeY);

	menu = new Menu(sizeX, sizeY);
}



void Game::inicializeGame( void )
{
	viewLayer->inicialize();
}



void Game::gameAutomat( void )
{
	while (true) {
		switch (state) {
			case 1:
				inicializeGame();
				state = 2;
				break;
			case 2:
				menu->show();
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			case 5:
				
				break;
			default:
				throw "Undefined state of game automat.";
		}
	}
}



void Game::run( void )
{
	inicializeObject();
	gameAutomat();
}



void Game::end( void )
{
	viewLayer->remove();
}
