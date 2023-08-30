#include <stdlib.h>
#include <stdio.h>

int main()
{
    char id[15];
    char name[20];
    char department[15];
    int age;

    FILE *file_ptr = fopen("./employee_details.csv", "r");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }
    // use fscanf to read in the header, %* tells c to read in any character at all. The
    // [^\n], tells it not to read the newline character. then \n tells it that should be
    // the last thing it sees. Notice we don't want any data, so we don't tell it to put
    // it anywhere. This is so we can get to the rest of the data.
    fscanf(file_ptr, "%*[^\n]\n");
    while (fscanf(file_ptr, "%[^,],%[^,],%[^,],%d\n", id, name, department, &age) != EOF) {
        putchar('|');
        printf("%s, %s, %s, %d\n", id, name, department, age);
    }

    if (feof(file_ptr)) {
        printf("End of file reached, contents read successfully!\n");
    }
    else {
        printf("Something went wrong, end of file not reached.");
    }

    fclose(file_ptr);

    return EXIT_SUCCESS;
}