#include "PRComposition.hpp"

PRComposition::PRComposition(const PRRunnable* one, const PRRunnable* two) {
    top_ = one;
    bottom_ = two;
}

PARAM_TYPE PRComposition::run(PARAM_TYPE param) const {
    return top_->run(bottom_->run(param));
}
