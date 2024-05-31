#pragma once

#include "Exceptions.hpp"
#include "Vector.hpp"

class Matrix {

    public:
        Matrix(size_t rows, size_t columns);
        ~Matrix();

        bool                        isSquare() const;

        void                        print() const;
        void                        reshape();

        size_t                      getRows() const;
        size_t                      getColumns() const;

        std::pair<size_t, size_t>   size();
    
    private:
        size_t      rows;
        size_t      columns;

        double**    matrix;
};