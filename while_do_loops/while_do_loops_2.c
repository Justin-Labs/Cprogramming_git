#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 0;

    while(i < 6) {
        // this time we have the update expression in at the end of the printf statement.
        printf("This is loop %d \n", i++);

    } 

    printf("\nValue of i at the end of the loop %d\n", i);

    return EXIT_SUCCESS;
}