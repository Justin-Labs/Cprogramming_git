#include <stdlib.h>
#include <stdio.h>
#include <errno.h>  // adds in diagnostic info
#include <string.h> // needed for strerror(errno)
// a mode will create a new file, or append to an existing file.

int main()
{       // the ./ indicates that this is a local path relative to the current working dir.
    FILE* file_ptr = fopen("./another_non_existing_file.txt", "a");

    if (file_ptr == NULL) {
        printf("The file could not be opened, error number: %d\n", errno);
        printf("Error opening file: %s\n", strerror(errno));
    } else {
        printf("The file was opened successfully! %p\n", file_ptr);
    }
    // fclose is similar to the free operation.
    fclose(file_ptr);

    return EXIT_SUCCESS;
}