#include <stdlib.h>
#include <stdio.h>
// Turning attention to local variables. These have scope within a function or block.
int main()
{
    {
        printf("This is a block within {}\n");

        char name[] = "Julie";

        printf("The 'name' variable is accessible in this block: %s\n", name);
    }

    return EXIT_SUCCESS;
}