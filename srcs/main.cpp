#include "./includes/Matrix.hpp"
#include "./includes/Vector.hpp"

int main (void) {

	double arr[] = { 1, 2, 3, 4, 5 };
	double arr1[] = { 5, 6, 7, 8, 9 };

	Vector vec(arr, 5);
	Vector vec1(arr1, 5);

	//-------------------Ex00-------------------//
	try {
		vec.add(vec1);
		vec1.sub(vec);
		vec.scl(5);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	//-------------------Ex01-------------------//
	try {
		Matrix mat(5, 5);
		Matrix mat1(5, 5);

		mat.insert(0, 0, 5);
		mat1.insert(0, 0, 5);

		mat.add(mat1);
		std::cout << std::endl;
		mat.sub(mat1);
		std::cout << std::endl;
		mat.scl(5);

	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}