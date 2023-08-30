#include <stdlib.h>
#include <stdio.h>

int main()
{

    const float income = 101000.23;
    const float expenses = 67500.76;

    printf("Initial income: %f \n", income);
    printf("Initial expenses: %f \n", expenses);

    printf("\n--------------\n\n");

    printf("************Updating variables\n\n");
    //shows problem because we are trying to change a constant
    income = 110000;
    expenses = 75000;

    printf("Updated income: %f \n", income);
    printf("Updated expenses: %f \n", expenses);

    printf("\n--------------\n\n");

    return EXIT_SUCCESS;

}