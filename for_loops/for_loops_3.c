#include <stdlib.h>
#include <stdio.h>

int main()
{   // initializing variable outside of for loop gives it a global scope, but
    // it is easy to forget to properly initialize it here, and have the for loop
    // not act in its intended way. 
    int index = -1;
    
    for (; index < 5; index++) {
        printf("%d\n", index);
    }

    return EXIT_SUCCESS;
}