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

    return EXIT_SUCCESS;
}