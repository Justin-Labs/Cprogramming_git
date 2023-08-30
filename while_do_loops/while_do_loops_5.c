#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 2;

    while(i < 1000 && i > 1) {

        printf("Value of i is %d \n", i);

        i = i * i;
    }

    printf("\nValue of i at the end of the loop %d\n", i);

    return EXIT_SUCCESS;
}