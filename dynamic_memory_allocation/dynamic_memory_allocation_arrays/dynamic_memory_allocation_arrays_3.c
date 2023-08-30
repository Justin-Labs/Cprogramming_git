#include <stdlib.h>
#include <stdio.h>
// suppose to show how can't rely on sizeof operator to show size of a dynamically 
// allocated array.
int main()
{
    int *int_ptr = (int *)malloc(10 * sizeof(int));

    if (int_ptr  == NULL) {
        printf("Memory not allocated! \n");
        return EXIT_FAILURE;
    }

    printf("Size of int_ptr: %lu\n", sizeof(int_ptr));
    printf("Size of value referenced by int_ptr: %lu\n", sizeof(*int_ptr));

    free(int_ptr);

    return EXIT_SUCCESS;
}