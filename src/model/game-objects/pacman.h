#pragma once

#include "element.h"
#include "../../controller/map.h"



class Pacman : public Element {
	public:
		Pacman();
		char getInterpretation( void );
		char getType( void );
		int getX();
		int getY();
		void move(char c, Map * map);

	private:
		int state;
		int x;
		int y;
};
