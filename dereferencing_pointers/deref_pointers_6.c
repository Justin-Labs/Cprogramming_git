#include <stdlib.h>
#include <stdio.h>
// If you dereference a NULL pointer, you get a segmentation fault. A runtime error
// not caught during compiling.
int main()
{
    int year = 1921;
    int * year_ptr = NULL;

    printf("year address: %p\n", *year_ptr);

    return EXIT_SUCCESS;
}