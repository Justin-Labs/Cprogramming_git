#include <stdlib.h>
#include <stdio.h>

int main()
{
    if (0) 
        printf("I am part of this if block\n");
    // This is an example of how missing curly braces has the 2nd printf just part of
    // the main program not part of the if block.
        printf("Am I part of the if block?\n");
    

    return EXIT_SUCCESS;
}