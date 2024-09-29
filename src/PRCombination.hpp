/**
* @author Elías Hernández Abreu
* @email alu0101487137@ull.edu.es
* 
* CC P1 - Primitive Recursive Functions
*
* @description Combination operator
*/

#ifndef PR_COMBINATION_H
#define PR_COMBINATION_H

#include "PRRunnable.hpp"

class PRCombination : public PRRunnable {
public:
    /**
    * @param one One of the runnables to combine results with
    * @param two The other runnable
    */
    PRCombination(const PRRunnable* one, const PRRunnable* two);

    /**
    * Runs the stored runnables with the given parameters and then
    * combines the exits in a single exit
    */
    virtual PARAM_TYPE run(PARAM_TYPE) const override;

private:
    const PRRunnable* first_ ;
    const PRRunnable* second_;
};

#endif
