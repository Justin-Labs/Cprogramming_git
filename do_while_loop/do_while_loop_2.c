#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a = 8;
    int b = 3;

    do {

        printf("a: %d, b: %d\n", a, b);

        a = a * 2;
        b = b * 3;

    } while (a <100 && b < 1000);

    printf("a: %d, b: %d at the end of the loop\n", a, b);

    return EXIT_SUCCESS;
}