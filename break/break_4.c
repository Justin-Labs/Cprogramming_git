#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num_guesses = 3, i = 0; 
    int response;
    bool guessed_right = false;

    while (i < num_guesses) {
        
        printf("Enter a number divisible by 5 and 7: ");
        scanf("%d", &response);

        if ((response % 5 == 0) && (response % 7 == 0)) {
            guessed_right = true;
            break;
        }else {
            printf("Try again...\n");
            i++;
        }
    }

    if (guessed_right) {
        printf("You are right %d is divdisible by 5 and 7!\n", response);
    } else {
        printf("I'm afraid, you have run out of guesses\n");
    }

    return EXIT_SUCCESS;
}
    
