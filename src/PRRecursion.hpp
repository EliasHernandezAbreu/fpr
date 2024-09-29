/**
* @author Elías Hernández Abreu
* @email alu0101487137@ull.edu.es
* 
* CC P1 - Primitive Recursive Functions
*
* @description Class of the primitive recursion
*/

#ifndef PR_RECURSION_H
#define PR_RECURSION_H

#include "PRRunnable.hpp"

class PRRecursion : public PRRunnable {
public:
    /**
    * @param limit The limit function that runs when the last param is 0
    * @param recursion The general functions that runs in any other case
    */
    PRRecursion(const PRRunnable* limit, const PRRunnable* recursion);

    /**
    * Runs the recursion operation using the limit and recursion functions
    * with the given parameters
    */
    virtual PARAM_TYPE run(PARAM_TYPE) const override;

private:
    const PRRunnable* limit_;
    const PRRunnable* recursion_;
};

#endif
