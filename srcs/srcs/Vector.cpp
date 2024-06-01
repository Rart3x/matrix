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

    this->printAddSub(*this, vec, newVecObj, "ADDITION");

    delete [] newVec;
}

void    Vector::scl(double scl) {
    double *newVec = new double[this->getSize()];

    for (size_t i = 0; i < this->getSize(); i++) {
        newVec[i] = this->vec[i] * scl;
    }

    Vector newVecObj(newVec, this->getSize());

    this->printScl(scl, newVecObj);

    delete [] newVec;
}


void    Vector::sub(Vector& vec) {
    if (this->getSize() != vec.getSize())
        throw std::length_error("Error: Vectors have to get same sizes for additions");

    double *newVec = new double[this->getSize()];

    for (size_t i = 0; i < this->getSize(); i++) {
        newVec[i] = this->vec[i] - vec[i];
    }

    Vector newVecObj(newVec, this->getSize());

    this->printAddSub(*this, vec, newVecObj, "SUBTRACTION");

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

void    Vector::printAddSub(Vector& vec, Vector& vec1, Vector& vec2, std::string mode) {
    std::cout << mode << " OF 2 VECTORS :" << std::endl;

    vec.print();
    vec1.print();
    std::cout << std::endl;
    vec2.print();
}

void    Vector::printScl(double scl, Vector& vec) {
    std::cout << "SCALING BY " << scl << std::endl;

    this->print();
    std::cout << scl << std::endl;
    std::cout << std::endl;
    vec.print();
}

//----------------------Getters functions----------------------//
size_t  Vector::getSize() const {
    return this->size;
}

double* Vector::getVec() const {
    return this->vec;
}

//----------------------Overload operators----------------------//
double Vector::operator[](size_t i) const {
    return this->vec[i];
}