#ifndef PR_COMBINATION_H
#define PR_COMBINATION_H

#include "PRRunnable.hpp"

class PRCombination : public PRRunnable {
public:
    PRCombination(const PRRunnable* one, const PRRunnable* two);
    virtual PARAM_TYPE run(PARAM_TYPE) const override;

private:
    const PRRunnable* first_ ;
    const PRRunnable* second_;
};

#endif
