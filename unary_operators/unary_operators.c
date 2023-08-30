#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num_1 = 90;
    int num_2 = 90;

    printf ("original num_1: %d\n\n", num_1);

    num_1++; //post increment operator
    
    printf ("updated num_1: %d\n\n", num_1);

    printf ("original num_2: %d\n\n", num_2);

    ++num_2; //pre increment operator

    printf ("updated num_2: %d\n\n", num_2);

    return EXIT_SUCCESS;
}