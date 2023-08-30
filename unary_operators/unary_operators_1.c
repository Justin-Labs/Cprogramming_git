#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num_1 = 90;
    int num_2 = 90;

    printf ("original num_1: %d\n\n", num_1);

    int result_1 = num_1++; //post increment operator. the value of the variable is first
                            //used in whatever expression it is in, and then after it's 
                            //been used in that expression, the value of the variable is 
                            //incremented by 1.
    
    printf ("updated num_1: %d\n\n", num_1);
    printf ("result_1: %d\n\n", result_1);

    printf ("original num_2: %d\n\n", num_2);

    int result_2 = ++num_2; //pre increment operator, the value of the variable is incremented
                            //by one, then it is used in that expression.

    printf ("updated num_2: %d\n\n", num_2);
    printf ("result_2: %d\n\n", result_2);

    return EXIT_SUCCESS;
}