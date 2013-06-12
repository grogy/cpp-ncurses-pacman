// #pragma once

#include <ncurses.h>
#include <menu.h>
#include <stdlib.h>
#include "menu.h"

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
#define CTRLD 	4
using namespace std;



Menu::Menu( int x, int y )
{
	this->x = x;
	this->y = y;
}



void Menu::show( void )
{
	char *choices[] = {
		"Nova hra - zacatecnik",
		"Nova hra - pokrocily",
		"Napoveda",
		"Konec hry"
	};


	ITEM **my_items;
	int c;				
	MENU *my_menu;
	int n_choices, i;
	ITEM *cur_item;

	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	
	n_choices = ARRAY_SIZE(choices);
	my_items = (ITEM **)calloc(n_choices + 1, sizeof(ITEM *));

	for(i = 0; i < n_choices; ++i)
		my_items[i] = new_item(choices[i], choices[i]);
	my_items[n_choices] = (ITEM *)NULL;

	my_menu = new_menu((ITEM **)my_items);
	mvprintw(LINES - 2, 0, "F1 - konec hry");
	post_menu(my_menu);
	refresh();

	while((c = getch()) != KEY_F(1)) {
		switch(c) {
			case KEY_DOWN:
				menu_driver(my_menu, REQ_DOWN_ITEM);
				break;
			case KEY_UP:
				menu_driver(my_menu, REQ_UP_ITEM);
				break;
		}
	}

	free_item(my_items[0]);
	free_item(my_items[1]);
	free_menu(my_menu);
}
