#include "game.h"
#include <cstddef>



Game::Game( void )
{
	viewLayer = NULL;
	modelLayer = NULL;
}



Game::~Game( void )
{
	delete viewLayer;
	delete modelLayer;
}



void Game::inicializeObject( void )
{
	viewLayer = new View();

	int sizeX = viewLayer->getSizeX();
	int sizeY = viewLayer->getSizeY();
	modelLayer = new Model(sizeX, sizeY);
}



void Game::inicializeGame( void )
{
	viewLayer->inicialize();
	viewLayer->printDebug("Welcome in game PACMAN!");
	viewLayer->getKeyCode();
}



void Game::run( void )
{
	inicializeObject();
	inicializeGame();
}



void Game::end( void )
{
	viewLayer->remove();
}
