#include "../includes/Vector.hpp"

//----------------------Constructor/Destructor----------------------//
Vector::Vector(double* vec, size_t size) : size(size){
    if (size <= 0)
        throw std::length_error("Error: Vector size can't be under 1");

    this->vec = new double[size];

    for (size_t i = 0; i < size; i++) {
        this->vec[i] = vec[i];
    }
}

Vector::~Vector() {
    delete [] this->vec;
}

//----------------------Maths functions----------------------//
void    Vector::add(Vector& vec) {
    if (this->getSize() != vec.getSize())
        throw std::length_error("Error: Vectors have to get same sizes for additions");

    double *newVec = new double[this->getSize()];

    for (size_t i = 0; i < this->getSize(); i++) {
        newVec[i] = this->vec[i] + vec[i];
    }

    Vector newVecObj(newVec, this->getSize());

    this->printAdd(*this, vec, newVecObj);

    delete [] newVec;
}

//----------------------Utils functions----------------------//

//----------------------Print functions----------------------//
void    Vector::print() {
    std::cout << "(";
    for (size_t i = 0; i < this->getSize(); i++) {
        if (i == this->getSize() - 1)
            std::cout << this->vec[i];
        else 
            std::cout << this->vec[i] << ", ";

    }
    std::cout << ")" << std::endl;
}

void    Vector::printAdd(Vector& vec, Vector& vec1, Vector& vec2) {
    std::cout << "ADDITION OF 2 VECTORS :" << std::endl;
    vec.print();
    vec1.print();
    vec2.print();
}

//----------------------Getters functions----------------------//
size_t  Vector::getSize() const {
    return this->size;
}

double* Vector::getVec() const {
    return this->vec;
}

//----------------------Overload operators----------------------//
double Vector::operator[](const int i) const {
    return this->vec[i];
}