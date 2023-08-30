#include <stdlib.h>
#include <stdio.h>
// introduction of NULL from stdlib.h
int main()
{
    int year = 1921;
    int * year_ptr = NULL;

    printf("year value: %d\n", year);
    printf("year address: %p\n", year_ptr);

    printf("\n");

    year_ptr = &year;
    printf("year address: %p\n", year_ptr);

    return EXIT_SUCCESS;
}