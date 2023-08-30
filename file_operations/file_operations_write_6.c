#include <stdlib.h>
#include <stdio.h>
// a+ mode, appends to file, not suppose to carry out read operations, but
// mine did?? maybe instructor is wrong, otherwise what is the + for?
int main()
{
    FILE *file_ptr = fopen("./quotes_file.txt", "a+");

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