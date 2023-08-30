#include <stdlib.h>
#include <stdio.h>
// two variables declared and intialized, outside the main function. These variables
// are global variables with file scope. Meaning they can be used anywhere in this file.
// Variables which are global with file fcope need to be declared inside a file, but 
// outside of all functions.
float num_1 = 10.3;
float num_2 = 20.5;

int main()
{
    printf("num_1 + num_2: %.2f\n", num_1 + num_2);
    printf("num_1 - num_2: %.2f\n", num_1 - num_2);
    printf("num_1 * num_2: %.2f\n", num_1 * num_2);
    printf("num_1 / num_2: %.2f\n", num_1 / num_2);

    return EXIT_SUCCESS;
}