#include <stdlib.h>
#include <stdio.h>
// two global variables declared with file scope.
float num_1;
float num_2;
// function outside of main function used to intialize our two global variables
void enter_values(){        
    printf("Please enter a value for num_1: ");     
    scanf("%f", &num_1);                            

    printf("Please enter a value for num_2: ");
    scanf("%f", &num_2);
}

void perform_arithmetic_operations(){

    printf("num_1 + num_2: %.2f\n", num_1 + num_2);
    printf("num_1 - num_2: %.2f\n", num_1 - num_2);
    printf("num_1 * num_2: %.2f\n", num_1 * num_2);
    printf("num_1 / num_2: %.2f\n", num_1 / num_2);
}

int main()
{
    enter_values();     //function used to intialize our global variables.

    perform_arithmetic_operations(); //function used to perform the arithmetic

    printf("num_1 still accessible in main(): %.2f\n", num_1);
    printf("num_2 still accessible in main(): %.2f\n", num_2);

    return EXIT_SUCCESS;
}