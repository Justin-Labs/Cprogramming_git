#include <stdlib.h>
#include <stdio.h>
// Using the dereferencing operator as an L value. We are going to use this dereferencing
// operator to change the value stored in a particular memory location.
int main()
{
    int num = 33;
    int *num_ptr = &num;

    printf("Address of num is: %p\n", &num);
    printf("Address stored in num_ptr: %p\n", num_ptr);
    printf("Value pointed to by num_ptr is: %d\n", *num_ptr);
    printf("\n");


    printf("-----------UPDATED VALUE-------- \n");
    *num_ptr = *num_ptr * 100; //using num_ptr to change value stored.

    printf("Address of num is (no change): %p\n", &num);
    printf("Address stored in num_ptr (no change): %p\n", num_ptr);
    printf("Updated value pointed at by num_ptr is: %d\n", *num_ptr);

    printf("\n");

    return EXIT_SUCCESS;
}