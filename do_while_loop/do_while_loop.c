#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 0;

    do{
        printf("This is loop %d \n", i);

        i++;

    } while (i <6);

    printf("\nValue of i at the end of the loop %d\n", i);

    return EXIT_SUCCESS;
}