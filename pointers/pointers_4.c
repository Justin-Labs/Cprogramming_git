#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num = 33;
    int *num_ptr = &num;

    printf("Original value in num is: %d\n", num);
    printf("Value pointed to by num_ptr: %d\n", *num_ptr);

    printf("\n");


    printf("-----------UPDATED VALUE-------- \n");
    num = num * 100;

    printf("Updated value in num is: %d\n", num);
    printf("Updated value pointed at by num_ptr is: %d\n", *num_ptr);

    return EXIT_SUCCESS;
}