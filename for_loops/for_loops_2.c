#include <stdlib.h>
#include <stdio.h>

int main()
{
    int index;
    //side note. I put a ; after the index++) and it only printed out 5, debug didn't help fix.
    for (index = -4; index < 5; index++) {
        printf("%d\n", index);
    }

    return EXIT_SUCCESS;
}