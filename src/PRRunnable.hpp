/**
* @author Elías Hernández Abreu
* @email alu0101487137@ull.edu.es
* 
* CC P1 - Primitive Recursive Functions
*
* @description Abstract parent class for all functions and operations
*/

#ifndef PR_RUNNABLE_H
#define PR_RUNNABLE_H

#include <vector>

// Type to be used as default parameters of PRF
#define PARAM_TYPE std::vector<unsigned int>

// Helper function to print the vector of parameters
void print_params(PARAM_TYPE params);

class PRRunnable {
public:
    /**
    * Runs the runnable
    * @param The params to run it with
    * @returns The result of the call
    */
    virtual PARAM_TYPE run(PARAM_TYPE) const = 0;
};

#endif
