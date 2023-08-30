#include <stdlib.h>
#include <stdio.h>
// Problem of free memory twice, SIGTRAP, Trace\breakpoint trap. or abort trap 6. on runtime
int main()
{
    int * ptr = (int *)malloc(10 * sizeof(int));
    printf("Address of ptr: %p \n", ptr);


    int * cpy_ptr = ptr;
    printf("Address of cpy_ptr: %p \n", cpy_ptr);

    free(ptr);
    printf("freed once! \n");

    free(cpy_ptr);
    printf("freed twice! \n");

    return EXIT_SUCCESS;
}