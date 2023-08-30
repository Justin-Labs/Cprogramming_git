#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main()
{
    char char_min = SCHAR_MIN;
    char char_max = SCHAR_MAX;

    printf("Minimum value of signed char: %d \n", char_min);
    printf("Maximum value of signed char: %d \n", char_max);
    printf("Printing the size of char: %lu \n", sizeof(char_max));

    printf("-------------------\n\n");

    return EXIT_SUCCESS;
}