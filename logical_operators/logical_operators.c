#include <stdlib.h>
#include <stdio.h>
// && logical and operator
int main()
{
    int num_1 = 23;
    int num_2 = 78;

    int res = (num_1 > 10) && (num_2 > 10);
    printf ("(num_1 > 10) && (num_2 >  10)? %d\n\n", res);

    res = (num_1 > 10) && (num_2 > 100);
    printf ("(num_1 > 10) && (num_2 >  100)? %d\n\n", res);

    res = (num_1 > 100) && (num_2 > 10);
    printf ("(num_1 > 100) && (num_2 >  10)? %d\n\n", res);

    res = (num_1 > 100) && (num_2 > 100);
    printf ("(num_1 > 100) && (num_2 >  100)? %d\n\n", res);

    return EXIT_SUCCESS;
}