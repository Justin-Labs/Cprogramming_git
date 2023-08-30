#include <stdlib.h>
#include <stdio.h>
// introduction of ftell, tell the current file position of file pointer.
int main()
{
    FILE *file_ptr = fopen("./quotes_file.txt", "r");

    if (file_ptr == NULL) {
        printf("The file could not be opened");

        return EXIT_FAILURE;
    }
    char data_buffer[1048];

    printf("Start position of file_ptr: %ld\n", ftell(file_ptr));

    fgets(data_buffer, 1048, file_ptr);
    printf("%s", data_buffer);
        
    printf("Current position of file_ptr: %ld\n", ftell(file_ptr));

    printf("Seeking offset 6 from current...\n");
    fseek(file_ptr, 6, SEEK_CUR); //SEEK_CUR is a constant related to current position of file ptr.

    printf("Moved file_ptr forward 6 bytes: %ld\n", ftell(file_ptr));

    fgets(data_buffer, 1048, file_ptr);
    printf("%s", data_buffer);

    fclose(file_ptr);

    return EXIT_SUCCESS;
}