#include <stdlib.h>
#include <stdio.h>
// returning doubles/floats
double compute_add()
{
    double result = 100.23 + 1000.64;

    return result;
}

double compute_subtract()
{
    double result = 100.23 - 1000.64;

    return result;
}

int main()
{
    double result_add = compute_add();
    printf("100.23 + 1000.64 = %lf\n", result_add);

    double result_subtract = compute_subtract();
    printf("100.23 - 1000.64 = %lf\n", result_subtract);

    return EXIT_SUCCESS;
}