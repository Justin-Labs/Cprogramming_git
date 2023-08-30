#include <stdlib.h>
#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++) {
        printf("Code executed BEFORE continue i: %d\n", i);

        if (2 == i) {
            continue;
        }

        printf("Code executed AFTER continue: %d\n", i);
    }

    return EXIT_SUCCESS;
}