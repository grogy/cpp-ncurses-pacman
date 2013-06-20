#pragma once

#include "element.h"



class Wall : public Element {
	public:
		char getInterpretation( void );
		char getType( void );
};
