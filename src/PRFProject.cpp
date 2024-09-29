#include <stdexcept>

#include "PRFProject.hpp"

PRFProject::PRFProject(int size, int index) {
    size_ = size;
    index_ = index;
}

PARAM_TYPE PRFProject::run(PARAM_TYPE list) const {
    PRFunction::calls += 1;
    if (list.size() != size_) {
        throw std::runtime_error("Wrong size of parameters in project function.");
    }
    return PARAM_TYPE(1, list[index_ - 1]);
}

