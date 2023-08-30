#include <stdlib.h>
#include <stdio.h>

int main()
{
    int scores[] = {45, 57, 68, 23, 89, 72, 34, 85};

    int i = 0;

    size_t scores_length = sizeof(scores) / sizeof(scores[0]);

    while(i < scores_length) {

        if (scores[i] > 50) {

            printf("Found a score > 50: %d\n", scores[i]);
        }

        i++;
    }

    printf("\nValue of i at the end of the loop %d\n", i);
}

