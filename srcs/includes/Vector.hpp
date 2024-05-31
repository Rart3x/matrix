#pragma once

#include "Exceptions.hpp"

class Vector {

    public:
        Vector(double* vec);
        ~Vector();

        void                    print();
        void                    reshape();
        size_t                  size();

        double                  operator[](const int i) const;

    private:
        double* vec;
};