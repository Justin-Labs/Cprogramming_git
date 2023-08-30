#include <stdlib.h>
#include <stdio.h>

int main()
{
    float num_1 = 90;
    float num_2 = 5;

    float result;

    result = num_1 + num_2;
    printf("Sum: %f\n", result);

    result = num_1 - num_2;
    printf("Difference: %f\n", result);

    result = num_1 * num_2;
    printf("Product: %f\n", result);

    // This operation works for integers and floats
    result = num_1 / num_2;
    printf("Quotient: %f\n", result);

    return EXIT_SUCCESS;
}