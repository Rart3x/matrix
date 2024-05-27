#pragma once

#include "Exceptions.hpp"

template<typename K>

struct Vector {

    void                print();
    void                reshape();
    std::pair<int, int> size();

    Vector() {}
};