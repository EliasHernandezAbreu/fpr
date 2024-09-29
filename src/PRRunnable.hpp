#ifndef PR_RUNNABLE_H
#define PR_RUNNABLE_H

#include <vector>

#define PARAM_TYPE std::vector<unsigned int>
void print_params(PARAM_TYPE params);

class PRRunnable {
public:
    virtual PARAM_TYPE run(PARAM_TYPE) const = 0;
};

#endif
