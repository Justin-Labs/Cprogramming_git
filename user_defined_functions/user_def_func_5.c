#include <stdlib.h>
#include <stdio.h>
// returning literals
double compute_add()
{
    return 100.23 + 1000.64;
}

double compute_subtract()
{
    return 100.23 - 1000.64;
}

int main()
{
    double result_add = compute_add();
    printf("100.23 + 1000.64 = %lf\n", result_add);

    double result_subtract = compute_subtract();
    printf("100.23 - 1000.64 = %lf\n", result_subtract);

    return EXIT_SUCCESS;
}