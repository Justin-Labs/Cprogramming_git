#include <stdlib.h>
#include <stdio.h>
// Nested for loop. looks like possible way to iterate over multi dimension array later..
int main()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 1; j < 4; j++) {
            printf("%d - %d\n", i, j);
        }
    }

    return EXIT_SUCCESS;
}