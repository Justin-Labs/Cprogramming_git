#include <stdlib.h>
#include <stdio.h>
#include <float.h>

int main()
{                   //note: after compile, my values seemed to round off with lots of zeros?
    float float_max = FLT_MAX;

    printf("Maximum representable value of float: %f \n", float_max);
    printf("Printing the size of float: %lu \n", sizeof(float_max));

    printf("--------------------------\n\n");

    double double_max = DBL_MAX;

    printf("Maximum representable value of double: %lf \n", double_max);
    printf("Printing the size of double: %lu \n", sizeof(double_max));

    printf("-----------------------\n\n");

    return EXIT_SUCCESS;
}   