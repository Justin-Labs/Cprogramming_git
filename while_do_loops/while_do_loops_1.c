#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 10;

    while(i < 6) {

        printf("This is loop %d \n", i);

        i++;
    } 

    printf("\nValue of i at the end of the loop %d\n", i);

    return EXIT_SUCCESS;
}