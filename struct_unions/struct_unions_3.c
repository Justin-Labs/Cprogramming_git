#include <stdlib.h>
#include <stdio.h>

int main()
{
    union Score {
        short marks;
        float gpa;
    };
    
    union Score score_1;

    score_1.marks = 87;

    printf("Score.marks: %d\n", score_1.marks);
    printf("Score.gpa: %f\n", score_1.gpa); // example. not correct, gpa field not set.

    return EXIT_SUCCESS;
}