#include <stdlib.h>
#include <stdio.h>
#include <limits.h> //defines numeric constants

int main()
{
    short short_min = SHRT_MIN;
    short short_max = SHRT_MAX;
            //%hd is the place holder for short int variables
            //%lu is the place holder for unsigned long variables, which is what sizeof returns.
    printf("Minimum value of short: %hd \n", short_min);
    printf("Maximum value of short: %hd \n", short_max);
    printf("Printing the size of short: %lu \n", sizeof(short_max));

    printf("\n---------------------------\n\n");

    int int_max = INT_MAX;
    int int_min = INT_MIN;

    printf("Minimum value of int: %d \n", int_min);
    printf("Maximum value of int: %d \n", int_max);
    printf("Printing the size of int: %lu \n", sizeof(int_max));

    printf("\n--------------------------\n\n");

    long long_min = LONG_MIN;
    long long_max = LONG_MAX;
        //%ld is a placeholder for a long int
    printf("Minimum value of long: %ld \n", long_min);
    printf("Maximum value of long: %ld \n", long_max);
    printf("Printing the size of long: %lu \n", sizeof(long_max));

    return EXIT_SUCCESS;
}