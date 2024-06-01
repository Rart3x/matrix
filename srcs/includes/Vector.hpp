#pragma once

#include "Exceptions.hpp"

class Vector {

    public:
    //----------------------Constructor/Destructor----------------------//
        Vector(double* vec, size_t size);
        ~Vector();

    //----------------------Maths functions----------------------//
        void                    add(Vector& vec);
        void                    linear_combination(Vector* vec, double* scls);
        void                    scl(double scl);
        void                    sub(Vector& vec);
    //----------------------Print functions----------------------//
        void                    print();
        void                    printAddSub(Vector& vec, Vector& vec1, Vector& vec2, std::string mode);
        void                    printScl(double scl, Vector &vec);
    //----------------------Utils functions----------------------//
        void                    reshape();
        
    //----------------------Getters functions----------------------//
        size_t                  getSize() const;
        double*                 getVec() const;
    //----------------------Overload operators----------------------//
        double                  operator[](size_t i) const;

    private:
        double* vec;
        size_t  size;
};