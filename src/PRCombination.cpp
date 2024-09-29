#include "PRCombination.hpp"
#include "PRRunnable.hpp"

PRCombination::PRCombination(const PRRunnable* one, const PRRunnable* two) {
    first_ = one;
    second_ = two;
}

PARAM_TYPE PRCombination::run(PARAM_TYPE params) const {
    PARAM_TYPE first_result = first_->run(params);
    PARAM_TYPE second_result = second_->run(params);

    PARAM_TYPE result;
    result.reserve(first_result.size() + second_result.size());
    result.insert(result.end(), first_result.begin(), first_result.end());
    result.insert(result.end(), second_result.begin(), second_result.end());
    return result;
}

