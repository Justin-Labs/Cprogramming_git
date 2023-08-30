#include <stdlib.h>
#include <stdio.h>
// iterating over an array using pointer arithmetic.
int main()
{
    double number_array[] = {100.1, 200.2, 300.3, 400.4, 500.5};

    double * arr_ptr = number_array;

    int size_of_array = sizeof(number_array) / sizeof(double);

    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < size_of_array; i++) {
        printf("%p \t %.2lf \n", arr_ptr + i, *(arr_ptr + i));
    }

    return EXIT_SUCCESS;
}