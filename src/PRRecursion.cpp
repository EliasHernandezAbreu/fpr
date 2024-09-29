#include <stdexcept>
#include <vector>

#include "PRRecursion.hpp"

PRRecursion::PRRecursion(const PRRunnable* limit, const PRRunnable* recursion) {
    limit_ = limit;
    recursion_ = recursion;
}

PARAM_TYPE PRRecursion::run(PARAM_TYPE params) const {
    if (params.size() < 1) {
        throw std::runtime_error("Recursion operators must take at least one parameter");
    }

    if (params[params.size() - 1] == 0) {
        if (params.size() == 1) {
            return limit_->run(PARAM_TYPE(1, 0));
        }

        return limit_->run(PARAM_TYPE(params.begin(), params.end() - 1));

    } else {
        PARAM_TYPE next_iter_params(params.begin(), params.end());
        next_iter_params[next_iter_params.size() - 1] -= 1;
        PARAM_TYPE next_iter_result = run(next_iter_params);
        PARAM_TYPE recursion_params;
        recursion_params.reserve(next_iter_params.size() + next_iter_result.size());
        recursion_params.insert(recursion_params.end(), next_iter_params.begin(), next_iter_params.end());
        recursion_params.insert(recursion_params.end(), next_iter_result.begin(), next_iter_result.end());
        return recursion_->run(recursion_params);
    }
}
