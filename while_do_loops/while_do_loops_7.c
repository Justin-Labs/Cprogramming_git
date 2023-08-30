#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 0;

    while(num != -1) {
        printf("Please enter a positive number to compute its square (-1 to exit): ");
        scanf("%d", &num);

        printf("You entered %d, its squared is %d\n", num, num * num);
    }

    printf("\nValue of num at the end of the loop %d\n", num);

    return EXIT_SUCCESS;
}