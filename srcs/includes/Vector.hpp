#pragma once

#include "Exceptions.hpp"

class Vector {

    public:
    //----------------------Constructor/Destructor----------------------//
        Vector(double* vec, size_t size);
        ~Vector();

    //----------------------Maths functions----------------------//
        void                    add(Vector& vec);
    //----------------------Print functions----------------------//
        void                    print();
        void                    printAdd(Vector& vec, Vector& vec1, Vector& vec2);
    //----------------------Utils functions----------------------//
        void                    reshape();
        
    //----------------------Getters functions----------------------//
        size_t                  getSize() const;
        double*                 getVec() const;
    //----------------------Overload operators----------------------//
        double                  operator[](const int i) const;

    private:
        double* vec;
        size_t  size;
};