#include <stdlib.h>
#include <stdio.h>

int main()
{
    char one_char;
    char many_chars[20]; //these cannot be changed after the fact, will always only hold 20.

    printf("size of char is: %lu\n", sizeof(one_char));
    printf("size of char array is: %lu\n", sizeof(many_chars));

    return EXIT_SUCCESS;
}