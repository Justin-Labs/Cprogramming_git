#include <stdlib.h>
#include <stdio.h>
// example purpose only. should only free memory that you allocated.
int main()
{
    int some_var = 100;
    int *some_ptr = &some_var;

    int *another_ptr = (int*)malloc(sizeof(int));

    printf("Address stored in some_ptr: %p \n", some_ptr);
    printf("Address stored in another_ptr: %p \n", another_ptr);

    free(another_ptr);
    free(some_ptr); // will throw an error during runtime Trace/breakpoint trap.
                    // gcc still isn't throwing it for me, only in debug mode...
                    // red underlining only showed up after debug and run.

    return EXIT_SUCCESS;
}