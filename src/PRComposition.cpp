#include "PRComposition.hpp"

PRComposition::PRComposition(const PRRunnable* one, const PRRunnable* two) {
    first_ = one;
    second_ = two;
}

PARAM_TYPE PRComposition::run(PARAM_TYPE param) const {
    return first_->run(second_->run(param));
}
