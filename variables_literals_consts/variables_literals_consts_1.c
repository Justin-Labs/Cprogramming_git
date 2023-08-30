#include <stdlib.h>
#include <stdio.h>

int main()
{  
 //type variable(value can be changed) = literal(value does not vary)
    int income = 100000;
    int expenses = 67000;

    printf("Initial income: %d \n", income);
    printf("Initial expenses: %d \n", expenses);

    printf( "-------------------\n\n");

    printf("************Updating variables\n\n");

    income = 110000;
    expenses = 75000;

    printf("Updated income: %d \n", income);
    printf("Updated expenses: %d \n", expenses);

    return EXIT_SUCCESS;
}