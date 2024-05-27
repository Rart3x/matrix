#pragma once

// #include "Exceptions.hpp"

#include <vector>

template<typename K>

class Matrix {

    public:
        Matrix(std::initializer_list<std::initializer_list<K>> initList);

        bool                isSquare() const;

        void                print() const;
        void                reshape();

        std::pair<int, int> size() const;
    
    private:
        std::vector<std::vector<K> > data;
};