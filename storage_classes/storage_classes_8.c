#include <stdlib.h>
#include <stdio.h>

int main()
{
    extern float pi;    
    extern float e;

    pi = 3.14;  //will run, but never a good idea to reassign extern variables..S
    e = 2.72;

    printf("The value of pi = %f\n", pi);
    printf("The value of e = %f\n", e);

    return EXIT_SUCCESS;
}