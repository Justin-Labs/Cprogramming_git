#include <stdlib.h>
#include <stdio.h>

int main()
{
    if (0) {    // any zero value is treated as false, won't execute.
        printf("The condition if (0) evaluates to true\n");
    }

    if (1) {    // any non-zero expression is treated as true.
        printf("The condition if (1) evaluates to true\n");
    }

    return EXIT_SUCCESS;
}