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

//----------------------Utils functions----------------------//
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

std::pair<size_t, size_t> Matrix::size() {
    std::pair<size_t, size_t> pair(this->rows, this->columns);

    return pair;
}

//----------------------Getters----------------------//
size_t Matrix::getColumns() const {
    return this->columns;
}

size_t Matrix::getRows() const {
    return this->rows;
}
//----------------------Setters----------------------//


//----------------------Overload operators----------------------//