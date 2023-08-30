#include <stdlib.h>
#include <stdio.h>
// iterating over an array using pointer arithmetic.
int main()
{
    char char_array[] = {'A', 'B', 'C', 'D', 'E'};

    char * arr_ptr = char_array;

    int size_of_array = sizeof(char_array) / sizeof(char);

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < size_of_array; i++) {
        printf("%p \t %c \n", arr_ptr + i, *(arr_ptr + i));
    }

    return EXIT_SUCCESS;
}