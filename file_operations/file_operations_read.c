#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *file_ptr = fopen("./existing_file.txt", "r");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }
    // when we read a ch from a file_ptr that file_ptr is in effect moved forward 1 position.
    // so the next time we attempt getc on the same file_ptr, we are going to get the next ch.
    int ch = getc(file_ptr); //allows us to read in one character from the file.
                             //cast as type int so we can check for EOF.
    while(ch != EOF) {
        // Note: This is to show that we read the file character by character
        // The '|' should be printed before ever character we display to screen
        putchar('|');
        putchar(ch);

        ch = getc(file_ptr);    //
    }
    // feof will return zero if not at EOF, and a non-zero value if we have.
    if(feof(file_ptr)) {
        printf("\nEnd of file reached, contents read successfully!\n");
    }
    else {
        printf("Something went wrong, end of file was not reached.");
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}