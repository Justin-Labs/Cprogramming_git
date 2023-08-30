#include <stdlib.h>
#include <stdio.h>
// allocates memory using malloc but does not free up memory before exiting. learning
// purposes only.
int main()
{
    int some_unitialized_var;
    int *some_ptr = &some_unitialized_var;
                    // casting return type (int*) default is (void*)
    int *another_ptr = (int*)malloc(sizeof(int));
        // my os did not zero out the memory location.
    printf("--------ADDRESS--------\n");
    printf("Address pointed to by some_ptr is: %p \n", some_ptr);
    printf("Address pointed to by another_ptr is: %p \n", another_ptr);

    printf("----------VALUE----------\n");
    printf("Value referenced by some_ptr: %d \n", *some_ptr);
    printf("Value referenced by another_ptr: %d \n", *another_ptr);

    return EXIT_SUCCESS;
}