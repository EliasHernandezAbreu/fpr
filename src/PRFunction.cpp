#include "PRFunction.hpp"

void PRFunction::resetCallCounter() {
    calls = 0;
}

unsigned int PRFunction::getCallCounter() {
    return calls;
}

unsigned int PRFunction::calls = 0;
