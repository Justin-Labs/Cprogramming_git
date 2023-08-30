#include <stdlib.h>
#include <stdio.h>

int main()
{
    float one_score;
    float scores[5]; //these cannot be changed after the fact, will always only hold 5.

    printf("size of float is: %lu\n", sizeof(one_score));
    printf("size of float array is: %lu\n", sizeof(scores));

    return EXIT_SUCCESS;
}