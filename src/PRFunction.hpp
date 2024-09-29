/**
* @author Elías Hernández Abreu
* @email alu0101487137@ull.edu.es
* 
* CC P1 - Primitive Recursive Functions
*
* @description Abstract parent class of all PRF
*/

#ifndef PR_FUNCTION_H
#define PR_FUNCTION_H

#include "PRRunnable.hpp"

class PRFunction : public PRRunnable {
public:
    /**
    * Sets the calls counter to 0
    */
    static void resetCallCounter();

    /**
    * Returns the calls counter
    * @returns The call counter
    */
    static unsigned int getCallCounter();

protected:
    static unsigned int calls;
};

#endif
