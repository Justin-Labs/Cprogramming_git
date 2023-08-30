#include <stdlib.h>
#include <stdio.h>
// no problems with having multiple pointers to same variable /memory location.
int main()
{
    int num = 221;
    int *num_ptr = &num;
    int *another_ptr = &num;

    printf("---------Address--------\n");
    printf("The address of num is: %p\n", &num);
    printf("Address stored in num_ptr: %p\n", num_ptr);
    printf("Address stroed in another_ptr: %p\n", another_ptr);

    printf("\n");
    
    printf("---------Value----------\n");
    printf("Value in num is: %d\n", num);
    printf("Value pointer to by num_ptr is: %d\n", *num_ptr);
    printf("Value pointed to by another_ptr is: %d\n", *another_ptr);

    return EXIT_SUCCESS;
}