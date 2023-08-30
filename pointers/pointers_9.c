#include <stdlib.h>
#include <stdio.h>
// This is a non-functional example, pointer types must match to work.
// It does run, but the float* num_ptr gives incorrect value on printf.
int main()
{
    int num = 221;
    float *num_ptr = &num;
    int *another_ptr = num_ptr;

    printf("Value in num is: %d\n", num);
    printf("Value pointed to by num_ptr is: %f\n", *num_ptr);
    printf("Value pointed to by another_ptr is: %d\n", *another_ptr);

    return EXIT_SUCCESS;
}