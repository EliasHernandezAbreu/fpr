#ifndef PRF_PROJECT_H
#define PRF_PROJECT_H

#include "PRFunction.hpp"

class PRFProject : public PRFunction {
public:
    PRFProject(int size, int index);
    virtual PARAM_TYPE run(PARAM_TYPE list) const override;

private:
    int size_;
    int index_;
};

#endif
