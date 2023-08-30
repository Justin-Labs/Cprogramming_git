#include <stdlib.h>     // system header files in system libraries
#include <stdio.h>
#include <math.h>
#include "lib/arithmetic.h"     // "" user defined header files, starts looking for at the
                            // current file directory or relative path.
// allows us to use both arithmetic.c and .h files.
// be sure when compiling to do gcc header_files_1.c lib/arithmetic.c
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