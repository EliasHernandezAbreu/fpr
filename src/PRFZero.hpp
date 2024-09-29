#ifndef PRF_ZERO_H
#define PRF_ZERO_H

#include "PRFunction.hpp"

class PRFZero : public PRFunction {
public:
    virtual PARAM_TYPE run(PARAM_TYPE list) const override;
};

#endif
