#include <stdlib.h>
#include <stdio.h>

float num_1 = 10.3; // both are global variables with file scope.
float num_2 = 20.5;

void other_function();

int main()
{
    printf("Global variable num_1: %.2f\n", num_1);
    printf("Global variable num_2: %.2f\n", num_2);
// the compiler creates these new variables of the same name because of the type declaration.
    int num_1 = 100;    // local in scope, only available in function.
    int num_2 = 200;    // they mask or hide the global variables.

    printf("Redefined variable num_1: %d\n", num_1);
    printf("Redefined variable num_2: %d\n", num_2);

    other_function(); // shows the global variable values
}

void other_function(){

    printf("Global variable num_1 (in other_function()): %.2f\n", num_1);
    printf("Global variable num_2 (in other_function()): %.2f\n", num_2);
}