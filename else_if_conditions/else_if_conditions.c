#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int score;

    printf("Please enter your total score out of 100: ");
    scanf("%d", &score);

    if (score > 90) {
        printf("Score %d, your grade for this term is %c\n\n", score, 'A');
    } else if (score > 70) {
        printf("Score %d, your grade for this term is %c\n\n", score, 'B');
    } else if (score > 50) {
        printf("Score %d, your grade for this term is %c\n\n", score, 'C');
    } else if (score > 40) {
        printf("Score %d, your grade for this term is %c\n\n", score, 'D');
    } else {
        printf("Score %d, your grade for this term is %c\n\n", score, 'F');
    }
    
    return EXIT_SUCCESS;
    
}