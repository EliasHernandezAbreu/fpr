/**
* @author Elías Hernández Abreu
* @email alu0101487137@ull.edu.es
* 
* CC P1 - Primitive Recursive Functions
*
* @description Class for the "z" PRF
*/

#ifndef PRF_ZERO_H
#define PRF_ZERO_H

#include "PRFunction.hpp"

class PRFZero : public PRFunction {
public:
    /**
    * Takes one parameter, returns 0
    */
    virtual PARAM_TYPE run(PARAM_TYPE list) const override;
};

#endif
