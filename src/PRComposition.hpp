#ifndef PR_COMPOSITION_H
#define PR_COMPOSITION_H

#include "PRRunnable.hpp"

class PRComposition : public PRRunnable {
public:
    PRComposition(const PRRunnable* one, const PRRunnable* two);
    virtual PARAM_TYPE run(PARAM_TYPE param) const override;

private:
    const PRRunnable* first_;
    const PRRunnable* second_;
};

#endif
