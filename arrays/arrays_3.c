#include <stdlib.h>
#include <stdio.h>

int main()
{
    int one_score;
    int scores[3];

    one_score = 67;

    scores[0] = 23;
    scores[1] = 44;
    scores[2] = 66;

    printf("one_score: %d\n\n", one_score);

    printf("score[0]: %d\n\n", scores[0]);
    printf("score[1]: %d\n\n", scores[1]);
    printf("score[2]: %d\n\n", scores[2]);

    return EXIT_SUCCESS;
}