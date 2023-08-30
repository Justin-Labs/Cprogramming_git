#include <stdlib.h>
#include <stdio.h>

int main()
{
    //any char variable needs to be enclosed in single quotes''. 
    //double quotes are used for string literals "".
    char letter = 'Q';
    char escape_seq_char = '\n';
    char ascii_char = 66;

    printf("Letter: %c \n", letter);
    printf("Escape sequence character: %c \n", escape_seq_char);
    printf("ASCII character: %c \n", ascii_char);

    printf("\n------------------\n\n");

    return EXIT_SUCCESS;
}