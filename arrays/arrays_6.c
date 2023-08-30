#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char char_array[] = { 'B', 'l', 'u', 'e'};

    printf("char_array[0]: %c\n", char_array[0]);
    printf("char_array[1]: %c\n", char_array[1]);
    printf("char_array[2]: %c\n", char_array[2]);
    printf("char_array[3]: %c\n", char_array[3]);

    //Strings are character arrays but working with strings is
    //an advanced topic in C, we'll learn more when we study
    //pointers
    printf("char_array: %s\n", char_array);

    return EXIT_SUCCESS;
}