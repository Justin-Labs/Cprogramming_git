#include <stdlib.h>
#include <stdio.h>

int main()
{
    int one_score;
    int scores[3]; //these cannot be changed after the fact, will always only hold 3.

    printf("size of integer is: %lu\n", sizeof(one_score));
    printf("size of integer array is: %lu\n", sizeof(scores));

    return EXIT_SUCCESS;
}