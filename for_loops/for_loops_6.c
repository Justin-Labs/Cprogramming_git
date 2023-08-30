#include <stdlib.h>
#include <stdio.h>

int main()
{
    for (int index = 0; index < 15; index = index + 3) {
        printf("%d\n", index);
    }

    return EXIT_SUCCESS;
}