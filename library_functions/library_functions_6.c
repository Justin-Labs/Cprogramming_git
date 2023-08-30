#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float var_1 = -15.234;
    float var_2 = 25.658;

    float abs_var_1 = fabs(var_1);
    float abs_var_2 = fabs(var_2);

    printf("Original = %f Absolute = %f\n", var_1, abs_var_1);
    printf("Original = %f Absolute = %f\n", var_2, abs_var_2);

    int var_3 = 5;
    int var_4 = 4;
    int var_5 = -2;

    printf("%d to the power %d is = %lf\n", var_3, var_4, pow(var_3, var_4));
    printf("%d to the power %d is = %lf\n", var_4, var_5, pow(var_4, var_5));

    printf("Square root of %f is = %.2f\n", abs_var_1, sqrt(abs_var_1));
    printf("Square root of %d is = %.2f\n\n", var_3, sqrt(var_3));
    //isnan, nan is short for not a number.
    if (isnan(sqrt(-10))) {
        printf("Negative numbers don't have real square roots. \n");
    }

    return EXIT_SUCCESS;
}