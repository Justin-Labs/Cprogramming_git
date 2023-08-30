#include <stdlib.h>
#include <stdio.h>
// r+ file must already exist, read and write mode. respects existing contents.
int main()
{
    FILE *file_ptr = fopen("./quotes_file.txt", "r+");

    if (file_ptr == NULL) {
        printf("The file could not be opened");

        return EXIT_FAILURE;
    }

    char data_buffer[1048];
    while(fgets(data_buffer, 1048, file_ptr) != NULL) {
        printf("%s" , data_buffer);

        fflush(stdout);
    }

    fputs("I find that the harder I work, the more luck I seem to have."
    "\n -Thomas Jefferson\n", file_ptr);
    fputs("I never dreamed about success, I worked for it. \n -Estee Lauder\n", file_ptr);

    fclose(file_ptr);

    return EXIT_SUCCESS;
}