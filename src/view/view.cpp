#include "view.h"
#include "../model/game-objects/none.h"
#include <ncurses.h>
#include <unistd.h>



void View::inicialize( void )
{
	initscr();
}



void View::print( int x, int y, char c )
{
	mvaddch(y, x, c);
}



void View::print( int x, int y, Element * e )
{
	mvaddch(y, x, e->getInterpretation());
}



void View::print( std::vector< std::vector<Element*> > matrix )
{
	for (int i = 0; i < getSizeX(); i++)
		for (int j = 0; j < getSizeY(); j++) {
			print(i, j, matrix[i][j]);
		}
}



void View::print( int x, int y, std::string str )
{
	mvprintw(y, x, str.c_str());
}



void View::printDebug( char * c )
{
	mvprintw(0, 0, "string:");
	mvprintw(0, 10, c);
}



void View::printDebug( int i )
{
	mvprintw(0, 0, "integer:");
	mvprintw(0, 10, "%d", i);
}



char View::getKeyCode( void )
{
	nodelay(stdscr, FALSE);
	char c = getch();

	return c;
}



char View::getKeyCodeNoDelay( void )
{
	nodelay(stdscr, TRUE);
	char c = getch(); // -1 pokud nic neni stisknuto

	return c;
}



void View::remove( void )
{
	endwin();
}



int View::getSizeX( void )
{
	int col, row;
	getmaxyx(stdscr, row, col);

	return col;
}



int View::getSizeY( void )
{
	int col, row;
	getmaxyx(stdscr, row, col);

	return row;
}



void View::clear( void )
{
	Element * e = new None();

	for (int i = 0; i < getSizeX(); i++) {
		for (int j = 0; j < getSizeY(); j++) {
			print(i, j, e);
		}
	}

	delete e;
}



void View::sleep( int microsec )
{
	//refresh();
	wrefresh(stdscr);
	usleep(microsec);
}
