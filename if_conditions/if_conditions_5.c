#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num_1 = 11;
    int num_2 = 111;

    int res = (num_1 > 10) && (num_2 >10);
    printf("(num_1 > 10) && (num_2 >10)? %d \n\n", res);
    
    res = (num_1 > 10) || (num_2 >10);
    printf("(num_1 > 10) || (num_2 >10)? %d \n\n", res);

    res = !(num_1 > 10);
    printf("!(num_1 > 10)? %d\n\n", res);

    return EXIT_SUCCESS;
}