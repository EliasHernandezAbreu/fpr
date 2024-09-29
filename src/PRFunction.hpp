#ifndef PR_FUNCTION_H
#define PR_FUNCTION_H

#include "PRRunnable.hpp"

class PRFunction : public PRRunnable {
public:
    static void resetCallCounter();
    static unsigned int getCallCounter();

protected:
    static unsigned int calls;
};

#endif
