#include <stdlib.h>
#include <stdio.h>

int main()
{  
 //type variable(value can be changed) = literal(value does not vary)L after tells compiler
 //that this is a long value that we'd like to store in this variable.U says literal is unsigned
 //note that this is a mismatch, because default long is signed, and if literal was big enough
 //it wouldn't be able to store it in the signed long.ul or lu order doesn't matter.
    long income = 100000ul;
    long expenses = 67000UL;

    printf("Initial income: %ld \n", income);
    printf("Initial expenses: %ld \n", expenses);

    printf( "-------------------\n\n");

    return EXIT_SUCCESS;
}