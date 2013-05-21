#include "view.h"
#include <ncurses.h>
#include <string>



void View::inicialize( void ) {
	initscr();
}



void View::print( int x, int y, char c ) {
	mvaddch(x, y, c);
}



void View::printDebug(char * c) {
	mvprintw(0, 0, "string:");
	mvprintw(0, 10, c);
}



void View::printDebug(int i) {
	mvprintw(0, 0, "integer:");
	mvprintw(0, 10, "%d", i);
}



char View::getKeyCode( void ) {
	nodelay(stdscr, FALSE);
	char c = getch();

	return c;
}



char View::getKeyCodeNoDelay( void ) {
	nodelay(stdscr, TRUE);
	char c = getch(); // -1 pokud nic neni stisknuto

	return c;
}



void View::remove( void ) {
	endwin();
}



int View::getSizeX() {
	int col, row;
	getmaxyx(stdscr, row, col);

	return row;
}



int View::getSizeY() {
	int col, row;
	getmaxyx(stdscr, row, col);

	return col;
}