#include <stdlib.h>
#include <stdio.h>
// another example of how you can access fields not set. And it gives you a jibberish
// answer. Again don't do, and remember to track which of the fields in the union we are
// actually using.
int main()
{
    union Score {
        short marks;
        float gpa;
    };
    
    union Score score_1;

    score_1.gpa = 4.66;

    printf("Score.marks: %d\n", score_1.marks);
    printf("Score.gpa: %f\n", score_1.gpa); // example. not correct, gpa field not set.

    return EXIT_SUCCESS;
}