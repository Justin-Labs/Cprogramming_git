#include <stdlib.h>
#include <stdio.h>
// C language does not have a default boolean type, but there is a header file for it.
// however these do work, true returns 1, false 0.
int main()
{
    int num_1 = 100;
    int num_2 = 1000;
    int res;

    res = num_1 == num_2;
    printf("num_1: %d\n\n", num_1);
    printf("num_2: %d\n\n", num_2);

    printf("num_1 equal to num_2?: %d\n\n", res);

    return EXIT_SUCCESS;
}