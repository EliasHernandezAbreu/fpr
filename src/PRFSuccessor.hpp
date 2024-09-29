/**
* @author Elías Hernández Abreu
* @email alu0101487137@ull.edu.es
* 
* CC P1 - Primitive Recursive Functions
*
* @description Class for the "s" PRF
*/

#ifndef PRF_SUCCESSOR_H
#define PRF_SUCCESSOR_H

#include "PRFunction.hpp"

class PRFSuccessor : public PRFunction {
public:
    /**
    * Takes one parameter, returns the next number
    */
    virtual PARAM_TYPE run(PARAM_TYPE list) const override;
};

#endif
