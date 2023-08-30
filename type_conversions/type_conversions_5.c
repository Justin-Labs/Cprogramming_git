#include <stdlib.h>
#include <stdio.h>

int main()
{
    double double_var = 985983.6573759;

    printf("double_var: %lf\n", double_var);

    printf("\nExplicit type conversion performed\n");

    int int_result = (int) double_var + 1;

    printf("int_result: %d\n", int_result);

    return EXIT_SUCCESS;
}