#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;

    do {
        printf("Please enter a positive number to compute its cube (-1 to exit): ");
        scanf("%d", &num);

        if ( num == -1) {
            break;
        }

        printf("You entered %d, it's cube is %d\n", num, num * num * num);

    } while (1);

    printf("\nValue of num at the end of the loop %d\n", num);

    return EXIT_SUCCESS;
}