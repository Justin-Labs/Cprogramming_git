#include <stdlib.h>
#include <stdio.h>

int main()
{       // the ./ indicates that this is a local path relative to the current working dir.
    FILE* file_ptr = fopen("./existing_file.txt", "r");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");
    } else {
        printf("The file was opened successfully! %p\n", file_ptr);
    }
    // fclose is similar to the free operation.
    fclose(file_ptr);

    return EXIT_SUCCESS;
}