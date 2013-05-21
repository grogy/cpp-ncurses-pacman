#include <vector>



class Model {
	public:
		Model(int sizeX, int sizeY);
		std::vector<int> get();
		void set(int x, int y);
	private:
		std::vector<int> matrix;
};
