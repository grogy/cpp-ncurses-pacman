#include <ncurses.h>



int main( void )
{
	initscr();
	mvprintw(5, 10, "Hello");
	mvprintw(6, 10, "I am Pacman.");
	getch();
	endwin();

	return 0;
}