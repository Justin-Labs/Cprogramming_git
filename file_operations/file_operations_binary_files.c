#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// wb short for write binary.
int main()
{
    FILE *file_ptr = fopen("./employee_details.bin", "wb");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    char name[20] = "James Darwin";
    char city[10] = "Seattle";
    int age = 29;
    float salary = 123000.34; //string would need 9 bytes, float in binary only needs 4
// fwrite(pointer, size of element, number of element, where to write to)
    fwrite(name, sizeof(char), 20, file_ptr);
    fwrite(city, sizeof(char), 10, file_ptr);
    fwrite(&age, sizeof(int), 1, file_ptr);
    fwrite(&salary, sizeof(float), 1, file_ptr);

    fclose(file_ptr);

    return EXIT_SUCCESS;
}