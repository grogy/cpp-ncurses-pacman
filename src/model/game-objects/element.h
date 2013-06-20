#pragma once



class Element {
	public:
		virtual ~Element();
		virtual char getInterpretation( void );
		virtual char getType( void );
};
