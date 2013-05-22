class Map {
	public:
		Map( int sizeX, int sizeY );
		std::vector< std::vector<int> > generate( void );
	private:
		std::vector< std::vector<int> > matrix;
};
