#pragma once

#include "element.h"
#include "../../controller/map.h"



class Monster : public Element {
	public:
		Monster();
		char getInterpretation( void );
		char getType( void );
		int getX( void );
		int getY( void );
		void move(Map * map);

	private:
		int oldMove;
		int x;
		int y;
};
