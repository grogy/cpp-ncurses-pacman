#include "view.h"
#include <ncurses.h>



void View::run( void ) {
	initscr();
	mvprintw(5, 10, "Hello");
	mvprintw(6, 10, "I am Pacman 2.");
	getch();
	endwin();
}