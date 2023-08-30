#include <stdlib.h>
#include <stdio.h>
// same as previous example but with a new quote and in "a" mode. added to existing contents.
int main() 
{
    FILE *file_ptr = fopen("./quotes_file.txt", "a");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    char quote[] = "Love the life you live. Live the life you love. \n -Bob Marley\n";
    // remember all strings in C are terminated with NULL terminating character \0
    for (int i = 0; quote[i] != '\0'; i++) {
        fputc(quote[i], file_ptr); // as we write, the file_ptr is automatically advanced
    }                              // but we still have to update i.

    fclose(file_ptr);

    return EXIT_SUCCESS;
}