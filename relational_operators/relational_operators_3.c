#include <stdlib.h>
#include <stdio.h>
// This example is to show that floating point types don't act as we might expect,
// and shouldn't be used for direct comparisons. double and float comparison.
int main()
{
    float num_1 = 100.245;
    double num_2 = 100.245;
    int res;

    res = num_1 == num_2;
    printf("num_1: %f\n\n", num_1);
    printf("num_2: %lf\n\n", num_2);

    printf("num_1 equal to num_2?: %d\n\n", res);

    return EXIT_SUCCESS;
}