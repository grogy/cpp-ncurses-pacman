#include "model.h"
#include <vector>



Model::Model(int sizeX, int sizeY) {
	// matrix.resize(sizeX);
	// for (int i = 0; i < sizeX; i++)
	//	matrix[i].resize(sizeY, 0);
}



std::vector<int> Model::get() {
	return matrix;
}



void Model::set(int x, int y) {
	// matrix[x][y] = 50;
}
