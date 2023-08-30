#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// This example is to show the correct way to do comparisons with float values using fabs
// included in <math.h> line 12 evaluates up to 3 significant digits by 1e-4 ie 10^-4.
// Clarification. fabs computes to absolute value and < verifies it is less than 1e-4.
int main()
{
    float num_1 = 100.245;
    double num_2 = 100.245;
    int res;

    res = fabs(num_1 - num_2) < 1e-4;
    printf("num_1: %f\n\n", num_1);
    printf("num_2: %lf\n\n", num_2);

    printf("num_1 equal to num_2?: %d\n\n", res);

    return EXIT_SUCCESS;
}