#include <stdlib.h>
#include <stdio.h>

int main()
{
    char character;
    printf("Enter a character: ");

    character = getchar();  // getchar used to accept user input for one character
                            // typically used in loops when looking for a user input.
    putchar(character);     // prints out single character to screen. Does not put in a
                            // new line.
    return EXIT_SUCCESS;
}