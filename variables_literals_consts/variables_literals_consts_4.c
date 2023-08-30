#include <stdlib.h>
#include <stdio.h>

int main()
{  
 //type variable(value can be changed) = literal(value does not vary)
 //0 specifies the literal a octal and 0x leading specifies the literal a hexidecimal.
    long income = 0100000;
    long expenses = 0x67000;

    printf("Initial income: %ld \n", income);
    printf("Initial expenses: %ld \n", expenses);

    printf( "-------------------\n\n");

    return EXIT_SUCCESS;
}