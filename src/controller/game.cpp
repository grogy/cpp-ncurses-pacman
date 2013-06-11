#include "game.h"
#include <cstddef>



Game::Game( void )
{
	viewLayer = NULL;
	modelLayer = NULL;
	menu = NULL;
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
	//viewLayer->print(modelLayer->get());
	viewLayer->getKeyCode();
}



void Game::showMenu( void )
{
	menu->show();
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
