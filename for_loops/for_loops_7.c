#include <stdlib.h>
#include <stdio.h>

int main()
{       //for (int index = 5; index > 0; index = index--) caused a infinite 5 loop...
    for (int index = 5; index > 0; index--) {
        printf("%d\n", index);
    }

    return EXIT_SUCCESS;
}