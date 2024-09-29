#include <stdexcept>

#include "PRFZero.hpp"

PARAM_TYPE PRFZero::run(PARAM_TYPE list) const {
    PRFunction::calls += 1;
    if (list.size() != 1) {
        throw std::runtime_error("Wrong size of parameters in zero function.");
    }
    return PARAM_TYPE(1, 0);
}

