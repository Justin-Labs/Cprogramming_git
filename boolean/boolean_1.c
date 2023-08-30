#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    int b;

    printf("Please enter a: ");
    scanf("%d", &a);
                // hard to see problem if you forget &.
    printf("Please enter b: ");
    scanf("%d", &b);

    bool a_greater_than_b = a > b ? true : false;

    printf("a greater than b: %s\n", a_greater_than_b == true ? "true" : "false");

    return EXIT_SUCCESS;
}