#include <stdlib.h>
#include <stdio.h>
// no dynamically allocated memory yet.
int main()
{
    int some_unitialized_var;
    int *some_ptr = &some_unitialized_var;

    int *another_ptr = NULL;

    printf("--------ADDRESS--------\n");
    printf("Address pointed to by some_ptr is: %p \n", some_ptr);
    printf("Address pointed to by another_ptr is: %p \n", another_ptr);

    printf("----------VALUE----------\n");
    printf("Value referenced by some_ptr: %d \n", *some_ptr);

    return EXIT_SUCCESS;
}