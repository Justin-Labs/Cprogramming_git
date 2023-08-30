#include <stdlib.h>     // system header files in system libraries
#include <stdio.h>
#include "arithmetic.h"
#include "arithmetic.h" // see header file for use of ifndef to prevent multiple occurances.

int main()
{
    float a = 100.44;
    float b = 23.87;

    printf("%.2f + %.2f = %.2f\n", a, b, add(a, b));
    printf("%.2f - %.2f = %.2f\n", a, b, subtract(a, b));
    printf("%.2f * %.2f = %.2f\n", a, b, multiply(a, b));
    printf("%.2f / %.2f = %.2f\n", a, b, divide(a, b));

    return EXIT_SUCCESS;
}