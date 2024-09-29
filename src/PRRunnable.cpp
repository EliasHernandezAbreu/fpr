#include <iostream>

#include "PRRunnable.hpp"

void print_params(PARAM_TYPE params) {
    std::cout << "[ ";
    for (unsigned int param : params) {
        std::cout << param << " ";
    }
    std::cout << "]";
}

