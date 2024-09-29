/**
* @author Elías Hernández Abreu
* @email alu0101487137@ull.edu.es
* 
* CC P1 - Primitive Recursive Functions
*
* @description Main file
*/

#include <cstdio>
#include <stdexcept>
#include <string.h>
#include <string>

#include "PRCombination.hpp"
#include "PRComposition.hpp"
#include "PRFProject.hpp"
#include "PRFSuccessor.hpp"
#include "PRFZero.hpp"
#include "PRRecursion.hpp"
#include "PRRunnable.hpp"

int main(int argc, char** argv) {
    if (argc >= 2 && strcmp(argv[1], "-h") == 0) {
        puts("The program calculates the power of two numbers"
             " using recursive primitive functions.\n"
             "USAGE:\n"
             "  (PROGRAM) <PARAMS>\n"
             "  Numbers must be natural.\n"
             "OPTIONS:\n"
             "  -h -- Displays this help message.\n");
        return 0;
    }

    PARAM_TYPE params(argc - 1);
    for (int i = 0; i < argc - 1; i++) {
        try {
            int number = std::stoi(argv[i + 1]);
            if (number < 0) {
                printf("Number smaller than zero \"%d\" passed, will become zero...\n", number);
                params[i] = 0;
            } else {
                params[i] = number;
            }
        } catch (std::invalid_argument e) {
            printf("Non numerical parameter \"%s\" found, will be interpreted as zero...\n", argv[i + 1]);
        }
    }

    printf("Input params: ");
    print_params(params);
    puts("");

    try {
        PRFSuccessor s;
        PRFZero z;

        PRFProject p1_1(1, 1);
        PRFProject p3_3(3, 3);

        PRComposition add_recursion(&s, &p3_3);
        PRRecursion add(&p1_1, &add_recursion);

        PRFProject p3_1(3, 1);
        PRCombination first_x_third(&p3_1, &p3_3);
        PRComposition multiply_recursion(&add, &first_x_third);
        PRRecursion multiply(&z, &multiply_recursion);

        PRComposition one(&s, &z);
        PRComposition pow_recursion(&multiply, &first_x_third);
        PRRecursion pow(&one, &pow_recursion);

        PARAM_TYPE result = pow.run(params);

        printf("\nResults: ");
        print_params(result);
        printf("\nIn %d PRF calls.\n", PRFunction::getCallCounter());

    } catch (std::runtime_error e) {
        puts(e.what());
        return 2;
    }

    return 0;
}
