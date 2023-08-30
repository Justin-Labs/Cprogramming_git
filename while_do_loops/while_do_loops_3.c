#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 0;

    while(i <12) {
        printf("This is loop %d \n", i);
        //don't switch += to =+, this just sets i to 3 everytime => infinite loop.
        i +=3;
    }

    printf("\nValue of i at the end of the loop %d\n", i);

    return EXIT_SUCCESS;
}