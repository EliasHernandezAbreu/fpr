#ifndef PRF_SUCCESSOR_H
#define PRF_SUCCESSOR_H

#include "PRFunction.hpp"

class PRFSuccessor : public PRFunction {
public:
    virtual PARAM_TYPE run(PARAM_TYPE list) const override;
};

#endif
