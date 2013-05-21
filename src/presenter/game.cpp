#include "game.h"
#include <cstddef>



Game::Game()
{
	viewLayer = NULL;
	modelLayer = NULL;
}



Game::~Game()
{
	delete viewLayer;
	delete modelLayer;
}



void Game::inicializeObject()
{
	viewLayer = new View();

	int sizeX = viewLayer->getSizeX();
	int sizeY = viewLayer->getSizeY();
	modelLayer = new Model(sizeX, sizeY);
}



void Game::inicializeGame()
{
	viewLayer->inicialize();
	viewLayer->printDebug("Welcome in game PACMAN!");
	viewLayer->getKeyCode();
}



void Game::run()
{
	inicializeObject();
	inicializeGame();
}



void Game::end()
{
	viewLayer->remove();
}
