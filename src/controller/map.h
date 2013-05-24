class Map {
	public:
		Map( int sizeX, int sizeY );
		std::vector< std::vector<Element> > generate( void );
	private:
		std::vector< std::vector<Element> > matrix;
};
