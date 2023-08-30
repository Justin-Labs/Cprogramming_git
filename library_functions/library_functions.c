#include <stdlib.h>
#include <stdio.h>
// atoi is short for ascii to integer, available from stdlib.h
int main()
{
    char first_string[] = "12345";

    int first_integer = atoi(first_string);

    printf("We now have an integer: %d\n", first_integer);

    if (first_integer == 12345) {
        printf("We can perform integer comparisons!\n");
    }

    return EXIT_SUCCESS;
}