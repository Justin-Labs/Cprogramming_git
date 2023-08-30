#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 8;

    do{
        printf("This is loop %d \n", i);

        i--;

    } while (i >= 2);

    printf("\nValue of i at the end of the loop %d\n", i);

    return EXIT_SUCCESS;
}