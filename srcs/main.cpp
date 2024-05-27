#include "./includes/Matrix.hpp"
// #include "./includes/Vector.hpp"

int main (void) {

	Matrix<int> matrix = { {1, 2, 3}, {4, 5, 6} };

	matrix.print();

	return (0);
}