#ifndef PR_RECURSION_H
#define PR_RECURSION_H

#include "PRRunnable.hpp"

class PRRecursion : public PRRunnable {
public:
    PRRecursion(const PRRunnable* limit, const PRRunnable* recursion);
    virtual PARAM_TYPE run(PARAM_TYPE) const override;

private:
    const PRRunnable* limit_;
    const PRRunnable* recursion_;
};

#endif
