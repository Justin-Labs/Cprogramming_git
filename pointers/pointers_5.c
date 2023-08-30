#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 33;
    int *num_ptr = &num;

    printf("Address of num is: %p\n", &num);
    printf("Address stored in num_ptr: %p\n", num_ptr);
    printf("Value pointed to by num_ptr is: %d\n", *num_ptr);
    printf("\n");


    printf("-----------UPDATED VALUE-------- \n");
    num = num * 100;

    printf("Address of num is (no change): %p\n", &num);
    printf("Address stored in num_ptr (no change): %p\n", num_ptr);
    printf("Updated value pointed at by num_ptr is: %d\n", *num_ptr);

    printf("\n");

    return EXIT_SUCCESS;
}