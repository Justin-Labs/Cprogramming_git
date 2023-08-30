#include <stdlib.h>
#include <stdio.h>

int main() 
{
    float main_var = 10.5;

    {
        printf("main_var (defined in main()): %.2f\n", main_var);

        float main_var = 111.1; //new local variable, hides global variable. has type

        printf("Redefined variable main_var_1: %.2f\n", main_var);
    }

    printf("\n");

    printf("Original definition in main() main_var_1: %.2f", main_var);
}