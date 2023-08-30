#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#undef errno

int main()
{
    FILE *file_ptr = fopen("./non_existent_file.txt", "r");

    if (file_ptr == NULL) {
        #ifdef errno
            printf("The file could not be opened, error number: %d\n", errno);
            printf("Error opening file: %s\n", strerror(errno));
        #endif

        #ifndef errno
            printf("Error opening the file - no error number available\n");
        #endif
    } else {
        printf("The file was opened successfully! %p\n", file_ptr);
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}