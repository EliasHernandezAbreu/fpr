/**
* @author Elías Hernández Abreu
* @email alu0101487137@ull.edu.es
* 
* CC P1 - Primitive Recursive Functions
*
* @description Composition operator
*/

#ifndef PR_COMPOSITION_H
#define PR_COMPOSITION_H

#include "PRRunnable.hpp"

class PRComposition : public PRRunnable {
public:
    /**
    * @param top The ending caller
    * @param bottom The runnable of which the result is taken
    */
    PRComposition(const PRRunnable* top, const PRRunnable* bottom);

    /**
    * Runs the bottom runnable with the params and runs the
    * top runnable with the result of the bottom
    */
    virtual PARAM_TYPE run(PARAM_TYPE param) const override;

private:
    const PRRunnable* top_;
    const PRRunnable* bottom_;
};

#endif
