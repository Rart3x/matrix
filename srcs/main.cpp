#include "./includes/Matrix.hpp"
#include "./includes/Vector.hpp"

int main (void) {

	double arr[] = { 1, 2, 3, 4, 5 };
	double arr1[] = { 5, 6, 7, 8, 9 };

	try {
		Vector vec(arr, 5);
		Vector vec1(arr1, 5);

		vec.add(vec1);
		vec1.sub(vec);

		vec.scl(5);

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}