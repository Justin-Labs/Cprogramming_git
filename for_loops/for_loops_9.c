#include <stdlib.h>
#include <stdio.h>

int main()
{       //initailization; condition eval; update expression
        // with the <= this will add one more iteration, because condtion will
        // still evaluate to true when updated to 5.
    for (int index = 0 ; index <= 5; index++) {
        printf(" %d. Hello World \n", index);
    }

    return EXIT_SUCCESS;
}