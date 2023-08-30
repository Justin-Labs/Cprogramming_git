#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;

    do {
        printf("Computing squares of odd numbers (will ignore even numbers, 0 to exit): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num % 2 == 0) {
            printf("You've entered an even number %d, ignoring...\n", num);
            continue;
        }

        printf("You entered %d, its square is %d\n", num, num * num);

    } while (1);

    printf("\nValue of num at the end of the loop %d\n", num);

    return EXIT_SUCCESS;
}