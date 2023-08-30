#include <stdlib.h>
#include <stdio.h>

int main()
{
    int scores[] = {45,  57, 68, 23, 89, 72, 34, 85};

    int i = 0;
    
    size_t scores_len = sizeof(scores) / sizeof(scores[0]);

    do {
        if (scores[i] < 60) {
            printf("Score under 60: %d\n", scores[i]);
        }

        i++;
    }while (i < scores_len);

    return EXIT_SUCCESS;
}