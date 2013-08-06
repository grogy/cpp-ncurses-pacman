#pragma once



/**
 * Base class for inheritence game objects
 */
class Element {
	public:
		/**
		 * Get interpretation object in char for view in ncurses
		 * @return interpretation object in char
		 */
		virtual char getInterpretation( void );

		/**
		 * Symbolic type of object
		 * @return interpretation type object
		 */
		virtual char getType( void );
};
