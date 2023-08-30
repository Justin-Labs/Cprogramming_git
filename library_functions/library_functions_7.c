#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// strlen returns the actual number of characters in the array that have been used
// to represent a string, not the array size.
int main()
{
    char full_name[] = "Deborah Summerhouse";

    int string_len = strlen(full_name);

    printf("The length of the string %s is %d\n", full_name, string_len);

    return EXIT_SUCCESS;
}