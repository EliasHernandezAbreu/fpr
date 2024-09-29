/**
* @author Elías Hernández Abreu
* @email alu0101487137@ull.edu.es
* 
* CC P1 - Primitive Recursive Functions
*
* @description Class for the "p" PRF
*/

#ifndef PRF_PROJECT_H
#define PRF_PROJECT_H

#include "PRFunction.hpp"

class PRFProject : public PRFunction {
public:
    /**
    * @param size The amount of parameters it takes
    * @param index The number to get from the params (starting at 1)
    */
    PRFProject(int size, int index);

    /**
    * Takes the specified number from the list
    */
    virtual PARAM_TYPE run(PARAM_TYPE list) const override;

private:
    int size_;
    int index_;
};

#endif
