#include <stdlib.h>
#include <stdio.h>

int main()
{
    char fav_letter = 'u';
    char response;

    printf("\nGuess my favorite letter to escpe this infinite loop of boredom:\n");

    for ( ; ; ) {
            //the trailing white space before %c here tells C to ignore any trailing
            //white space in the user's input which might include new line characters.
        scanf(" %c", &response);

        if (response == 'u') {
            
            printf("u does happen to be my favorite!\n");

            break;
        }

        printf("BORED...zzzzz \n");
    }

    printf("Outside of the loop now u- whew!\n");

    return EXIT_SUCCESS;
}