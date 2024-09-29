#include <stdexcept>

#include "PRFSuccessor.hpp"

PARAM_TYPE PRFSuccessor::run(PARAM_TYPE list) const {
    PRFunction::calls += 1;
    if (list.size() != 1) {
        throw std::runtime_error("Wrong size of parameters in successor function.");
    }
    return PARAM_TYPE(1, list[0] + 1);
}
