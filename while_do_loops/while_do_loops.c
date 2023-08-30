#include <stdlib.h>
#include <stdio.h>
// while loops notes:: initialized before while statement. while statement has the condition
// and the update expression somewhere in the body of the loop.
int main()
{
    int i = 0;

    while(i < 6) {

        printf("This is loop %d \n", i);

        i++;
    } 

    printf("\nValue of i at the end of the loop %d\n", i);

    return EXIT_SUCCESS;
}