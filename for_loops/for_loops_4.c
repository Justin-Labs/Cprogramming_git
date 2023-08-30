#include <stdlib.h>
#include <stdio.h>

int main()
{   //not recommeded to use float for for loops, due to all of the digits of precision.
    //it might increment just under the desired value, then do an extra loop.
    for (float index =0; index < 5; index++) {
        printf("%f\n", index);
    }

    return EXIT_SUCCESS;
}