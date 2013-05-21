class View {
	public:
		void inicialize( void );
		void print( int x, int y, char c );
		void remove( void );
		char getKeyCode( void );
		char getKeyCodeNoDelay( void );

		int getSizeX();
		int getSizeY();

		void printDebug(char * c);
		void printDebug(int i);
};
