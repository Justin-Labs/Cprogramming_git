#include <stdlib.h>
#include <stdio.h>
// ifdef, ifndef, will change how thee code is compiled based on if symbols are defined.
//#define ADD(x, y) x + y

void perform_add(float a, float b) {

    #ifdef ADD
        printf("Sum: = %.2f\n", ADD(a, b));
    #endif

    #ifndef ADD
        printf("ADD macro not defined\n");
    #endif
}

int main()
{
    printf("Performing first add\n");
    perform_add(5.6, 2.1);

    printf("\nPerforming second add\n");
    perform_add(10.3, 7.9);

    return EXIT_SUCCESS;
}