#include <stdlib.h>
#include <stdio.h>

int main()
{  
    //note that float data literals has precision issues, so never use == equality operator
    //with them as they will never match. this is the output.
    //Initial income: 97456.343750 
    //Initial expenses: 45678.230469 
    //Initial bank balance: -100.699997
    float income = 97456.340000;
    float expenses = 45678.230000;
    float bank_balance = -100.7;

    printf("Initial income: %f \n", income);
    printf("Initial expenses: %f \n", expenses);
    printf("Initial bank balance: %f \n", bank_balance);

    printf( "-------------------\n\n");

    return EXIT_SUCCESS;
}