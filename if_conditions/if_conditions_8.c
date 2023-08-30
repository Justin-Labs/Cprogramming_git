#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num_1 = 11;
    int num_2 = 111;

    if (num_1 == num_2) {   // try and make sure you don't for an equal sign.
        printf("num_1 is equal to num_2\n\n");
    }

    printf("num_1: %d\n\n", num_1);
    printf("num_2: %d\n\n", num_2);

    return EXIT_SUCCESS;
}