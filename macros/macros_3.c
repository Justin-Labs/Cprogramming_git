#include <stdlib.h>
#include <stdio.h>

#define ADD(x, y) x + y //this is a source of possible problems. see next example.
#define SUB(x, y) x - y

int main()
{
    int a = 10, b = 15;

    int result = ADD(a, b);
    printf("Sum = %d\n", result);

    result = SUB(a, b);
    printf("Difference = %d\n", result);

    return EXIT_SUCCESS;
}