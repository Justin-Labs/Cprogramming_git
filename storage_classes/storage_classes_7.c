#include <stdlib.h>
#include <stdio.h>
// extern tells compiler that these values already exist somewhere out there.
extern float pi;    // involves linker. how to: gcc file_1.c file_2.c 
extern float e;     // don't try and redefine these, that part of why they made const
                    // in order to prevent.
int main()
{
    printf("The value of pi = %f\n", pi);
    printf("The value of e = %f\n", e);

    return EXIT_SUCCESS;
}