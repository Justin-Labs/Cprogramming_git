#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// make sure typedef matches accross serialization and deserialization.
typedef struct {
    char name[20];
    char city[20];
    int age;
    float salary;
} Employee; // now a type.

int main()
{
    FILE *file_ptr = fopen("./employee_info.bin", "rb");

    if (file_ptr == NULL) {
        printf("The file could not be opened\n");

        return EXIT_FAILURE;
    }

    Employee employee;

    fread(&employee, sizeof(Employee), 1, file_ptr);

    fclose(file_ptr);

    printf("Name: %s\n", employee.name);
    printf("City: %s\n", employee.city);
    printf("Age: %d\n", employee.age);
    printf("Salary: %f\n", employee.salary);

    return EXIT_SUCCESS;
}