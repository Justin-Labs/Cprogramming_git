#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number_array[] = {100, 200, 300, 400, 500};

    int * arr_ptr = number_array;

    printf("\nValue in number_array[0] using array: %d\n", number_array[0]);
    printf("Value in number_array[0] using pointer: %d\n", *arr_ptr);

    printf("\nValue in number_array[1] using array: %d\n", number_array[1]);
    printf("Value in number_array[1] using pointer: %d\n", *(arr_ptr + 1));
    // don't forget to add () around pointer arithmetic, otherwise you'll get 101, and 102
    printf("\nValue in number_array[2] using array: %d\n", number_array[2]);
    printf("Value in number_array[2] using pointer: %d\n", *(arr_ptr + 2));

    return EXIT_SUCCESS;
}