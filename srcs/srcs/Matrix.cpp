#include "../includes/Matrix.hpp"

template<typename K>
    
Matrix::Matrix(std::initializer_list<std::initializer_list<K>> initList) {
    for (const auto& rowInitList : initList) {
        std::vector<K> row(rowInitList.begin(), rowInitList.end());
        this->data.push_back(row);
    }
};

// template<typename K>

// void    Matrix<K>::print(void) const {
//     // typename std::vector<std::vector<K> >::iterator it;

//     // for (it = this->data.begin(); it != this->data.end(); it++) {
//     //     std::cout << *(it) << std::endl;
//     // }
// }