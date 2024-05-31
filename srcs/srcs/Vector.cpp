#include "../includes/Vector.hpp"

//----------------------Constructor/Destructor----------------------//
Vector::Vector(double* vec) : vec(vec) {}
Vector::~Vector() {}

//----------------------Utils functions----------------------//
void        Vector::print() {
    for (size_t i = 0; i < this->size(); i++)
        std::cout << this->vec[i] << " ";
    std::cout << std::endl;
}

size_t Vector::size() {
    size_t i = 0;

    while (this->vec[i])
        i++;

    return i;
}
//----------------------Overload operators----------------------//
double Vector::operator[](const int i) const {
    return this->vec[i];
}