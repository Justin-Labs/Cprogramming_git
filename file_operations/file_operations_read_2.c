#include <stdlib.h>
#include <stdio.h>

int main()
{
    char name[20];
    int age;
    float salary;

    FILE *file_ptr = fopen("./structured_file.txt", "r");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }
                                    //name is a char array, and arrays are effectively ptrs.
    while (fscanf(file_ptr, "%s %d %f\n", name, &age, &salary) !=EOF) {
        putchar('|');
        printf("%s, %d, %f\n", name, age, salary);
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