#include "./includes/Matrix.hpp"
#include "./includes/Vector.hpp"

int main (void) {

	double arr[] = { 1, 2, 3, 4, 5 };

	Vector vec(arr);

	Matrix mat(15, 15);

	mat.print();

	return (0);
}