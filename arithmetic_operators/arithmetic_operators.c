#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num_1 = 90;
    int num_2 = 5;

    int result;

    result = num_1 + num_2;
    printf("Sum: %d\n", result);

    result = num_1 - num_2;
    printf("Difference: %d\n", result);

    result = num_1 * num_2;
    printf("Product: %d\n", result);

    // This operation works for integers and floats
    result = num_1 / num_2;
    printf("Quotient: %d\n", result);

    // This operation works for integers
    result = num_1 % num_2;
    printf("Remainder: %d\n", result);

    return EXIT_SUCCESS;
}