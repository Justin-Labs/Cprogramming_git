#include <stdlib.h>
#include <stdio.h>
// realloc used to reallocate memory that has previously been allocated
// allows us to resize arrays.
// suppose to zero out new memory like calloc, but niether is doing with my setup...
void print_array(int * emp_salary_ptr, int length) {
    printf("ADDRESS \t Value \n");
    for (int i =0; i < length; i++) {
        printf("%p \t %d \n", &emp_salary_ptr[i], emp_salary_ptr[i]);
    }
}

int main()
{
    int * employ_salary_ptr = (int *)calloc(3, sizeof(int));

    if (employ_salary_ptr == NULL) {
        printf("Memory not allocated!");
        return EXIT_FAILURE;
    }

    employ_salary_ptr[0] = 120000;
    employ_salary_ptr[1] = 10000;
    employ_salary_ptr[2] = 95000;

    print_array(employ_salary_ptr, 3);

    employ_salary_ptr = (int *)realloc(employ_salary_ptr, 5 * sizeof(int));

    if (employ_salary_ptr == NULL) {
        printf("Memory not allocated! \n");
    }

    print_array(employ_salary_ptr, 5);

    free(employ_salary_ptr);

    return EXIT_SUCCESS;

}