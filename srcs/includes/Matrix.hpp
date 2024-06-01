#pragma once

#include "Exceptions.hpp"
#include "Vector.hpp"

class Matrix {

    public:
    //----------------------Constructor/Destructor----------------------//
        Matrix(size_t rows, size_t columns);
        ~Matrix();
    //----------------------Maths functions----------------------//
        void                        add(Matrix& mat);
        void                        scl(double scl);
        void                        sub(Matrix& mat);

    //----------------------Print functions----------------------//
        void                        print() const;

    //----------------------Utils functions----------------------//
        void                        insert(size_t row, size_t column, double val);
        bool                        isSquare() const;
        void                        reshape();

    //----------------------Getters functions----------------------//
        size_t                      getRows() const;
        size_t                      getColumns() const;
        std::pair<size_t, size_t>   getSize();
    //----------------------Overload operators----------------------//
        double                      operator()(size_t row, size_t column) const;   
    
    private:
        size_t      rows;
        size_t      columns;

        double**    matrix;
};