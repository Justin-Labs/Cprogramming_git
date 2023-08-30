#include <stdlib.h>
#include <stdio.h>

int main()
{
    int scores[] = {45, 56, 56, 98, 44};

    printf("Original array---------\n");
    printf("score[0]: %d\n", scores[0]);
    printf("score[1]: %d\n", scores[1]);
    printf("score[2]: %d\n", scores[2]);
    printf("score[3]: %d\n", scores[3]);
    printf("score[4]: %d\n", scores[4]);

    scores[0]= 99; // showing how we can update values in array.
    scores[4]= 22;

    printf("Updated array----------\n");
    printf("score[0]: %d\n", scores[0]);
    printf("score[1]: %d\n", scores[1]);
    printf("score[2]: %d\n", scores[2]);
    printf("score[3]: %d\n", scores[3]);
    printf("score[4]: %d\n", scores[4]);

    return EXIT_SUCCESS;
}