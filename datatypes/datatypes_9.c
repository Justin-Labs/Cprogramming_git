#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned char_min = 0;
    unsigned char_max = UCHAR_MAX;

    printf("Minimum value of unsigned char: %d \n", char_min);
    printf("Maximum value of unsigned char: %d \n", char_max);
    printf("Printing the size of char: %lu \n", sizeof(char_max));
    //why on earth am i getting size of char: 4 ??? should be 1.
    printf("-------------------\n\n");

    return EXIT_SUCCESS;
}