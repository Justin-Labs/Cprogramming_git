#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_ptr = fopen("./existing_file.txt", "r");
    char data_buffer[1048];

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }
    // fgets reads in until it reaches the capacity we put in, or a new line ch (\n).
    // fgets reads in strings, and has a return type of char*. last ch space is devoted to NULL ch.
    while (fgets(data_buffer, 1048, file_ptr) != NULL) {
        // Note: This is to show that we read the file line by line
        // The '|' should be printed before every string we read in 
        putchar('|');
        printf("%s", data_buffer);
        // stdout refers to standard output, to display on screen.
        fflush(stdout);
    }
    
    if (feof(file_ptr)) {
        printf("\nEnd of file reached, contents read successfully!\n");
    }
    else {
        printf("Something went wrong, end of file was not reached");
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}