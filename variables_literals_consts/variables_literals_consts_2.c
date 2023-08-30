#include <stdlib.h>
#include <stdio.h>

int main()
{  
 //type variable(value can be changed) = literal(value does not vary)L after tells compiler
 //that this is a long value that we'd like to store in this variable.
    long income = 100000l;
    long expenses = 67000L;

    printf("Initial income: %d \n", income);
    printf("Initial expenses: %d \n", expenses);

    printf( "-------------------\n\n");

    return EXIT_SUCCESS;
}