#include "../includes/Matrix.hpp"

//----------------------Constructor/Destructor----------------------//
Matrix::Matrix(size_t rows, size_t columns) : rows(rows), columns(columns) {
    matrix = new double*[rows];

    for (size_t i = 0; i < rows; i++) {
        matrix[i] = new double[columns];
        for (size_t j = 0; j < columns; j++)
            matrix[i][j] = 0;
    }
}

Matrix::~Matrix() {
    for (size_t i = 0; i < this->rows; i++) {
        delete[] this->matrix[i];
    }

    delete[] this->matrix; 
}

//----------------------Maths functions----------------------//
void    Matrix::add(Matrix& mat) {
    if (this->getSize() != mat.getSize())
        throw std::length_error("Error: Matrix have to get same sizes");

    Matrix newMat(this->rows, this->columns);

    for (size_t i = 0; i < this->rows; i++) {
        for (size_t j = 0; j < this->columns; j++) {
            newMat.insert(i, j, (this->operator()(i, j) + mat(i, j)));
        }
    }

    newMat.print();
}

void    Matrix::scl(double scl) {
    Matrix newMat(this->rows, this->columns);

    for (size_t i = 0; i < this->rows; i++) {
        for (size_t j = 0; j < this->columns; j++) {
            newMat.insert(i, j, (this->operator()(i, j) * scl));
        }
    }

    newMat.print();
}

void    Matrix::sub(Matrix& mat) {
    if (this->getSize() != mat.getSize())
        throw std::length_error("Error: Matrix have to get same sizes");

    Matrix newMat(this->rows, this->columns);

    for (size_t i = 0; i < this->rows; i++) {
        for (size_t j = 0; j < this->columns; j++) {
            newMat.insert(i, j, (this->operator()(i, j) - mat(i, j)));
        }
    }

    newMat.print();
}

//----------------------Utils functions----------------------//
void    Matrix::insert(size_t row, size_t column, double val) {
    if (this->rows < row || this->columns < column)
        throw std::length_error("Error: Values have to be in range of the Matrix");
    this->matrix[row][column] = val;
}

bool    Matrix::isSquare() const {
    if (this->rows == this->columns)
        return true;
    return false;
}    

void    Matrix::print() const {
    for (size_t i = 0; i < this->rows; i++) {
        std::cout << "(";
        for (size_t j = 0; j < this->columns; j++) {
            if (j == this->columns - 1)
                std::cout << this->matrix[i][j];
            else
                std::cout << this->matrix[i][j] << ", ";
        }
        std::cout << ")" << std::endl;
    }
}

//----------------------Getters----------------------//
size_t Matrix::getColumns() const {
    return this->columns;
}

size_t Matrix::getRows() const {
    return this->rows;
}

std::pair<size_t, size_t> Matrix::getSize() {
    std::pair<size_t, size_t> pair(this->rows, this->columns);

    return pair;
}
//----------------------Setters----------------------//


//----------------------Overload operators----------------------//
double  Matrix::operator()(size_t row, size_t column) const {
    if (this->rows < row || this->columns < column)
        throw std::length_error("Error: Values have to be in range of the Matrix");
    return this->matrix[row][column];
}