#include <stdlib.h>
#include <stdio.h>
#include <limits.h> //defines numeric constants
// signed is the default...
int main()
{
    unsigned short ushort_max = USHRT_MAX;
            //%hu is the place holder for short int variables. h for short, u for unsigned int.
            //%lu is the place holder for unsigned long variables, which is what sizeof returns. 
            //l for long, u for unsigned int.
    printf("Maximum value of unsigned short: %hu \n", ushort_max);
    printf("Printing the size of unsigned short: %lu \n", sizeof(ushort_max));

    printf("\n---------------------------\n\n");

    unsigned uint_max = UINT_MAX;
    //%u is placeholder for unsigned int.
    printf("Maximum value of unsigned int: %u \n", uint_max);
    printf("Printing the size of unsigned int: %lu \n", sizeof(uint_max));

    printf("\n--------------------------\n\n");

    unsigned ulong_max = ULONG_MAX;
        //%lu is placed holder for unsigned unsigned long
    printf("Maximum value of unsigned long: %lu \n", ulong_max);
    printf("Printing the size of unsigned long: %lu \n", sizeof(ulong_max));

    return EXIT_SUCCESS;
}