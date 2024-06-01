#include "./includes/Matrix.hpp"
#include "./includes/Vector.hpp"

int main (void) {

	double arr[] = { 1, 2, 3, 4, 5 };

	try {
		Vector vec(arr, 5);
		Vector vec1(arr, 5);

		vec.add(vec1);

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}