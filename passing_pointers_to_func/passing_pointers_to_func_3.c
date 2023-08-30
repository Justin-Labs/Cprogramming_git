#include <stdlib.h>
#include <stdio.h>
// general rule when passing an array into a function have two input parameters.
// the first is the pointer to the same type as the element in the array,
// the second is an int or unsigned int, holding the number of elements in the array.
void print_array(char *, int);

int main()
{
    char char_array[] = {'A', 'B', 'C', 'D', 'E'};

    print_array(char_array, 5);

    return EXIT_SUCCESS;
}

void print_array(char *char_ptr, int length) {
    for (int i =0; i < length; i++) {
        printf("%p \t %c \n", char_ptr + i, *(char_ptr + i));
    }
}