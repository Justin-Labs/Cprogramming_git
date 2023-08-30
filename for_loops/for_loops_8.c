#include <stdlib.h>
#include <stdio.h>

int main()
{       //update expression moved to inside the for loop, again works but not recommended
        // because if it's forgotten, you get an infinite loop.
    for (int index = 5; index > 0;) {
        printf("%d\n", index);

        index--;
    }

    return EXIT_SUCCESS;
}