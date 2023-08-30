#include <stdlib.h>
#include <stdio.h>

int main()
{
    // auto is the default storage class for local variables, this makes is explicit, but
    // not really needed.
    auto int num_1 = 100;
    auto int num_2 = 1000;

    printf("num_1 + num_2: %d\n", num_1 + num_2);

    return EXIT_SUCCESS;
}