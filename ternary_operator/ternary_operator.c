#include <stdlib.h>
#include <stdio.h>
// not a ternary program, but it does the same thing with more coding.
int main()
{
    float first_number;
    float second_number;

    printf("Please enter the first number: ");
    scanf("%f", &first_number);

    printf("Please enter the second number: ");
    scanf("%f", &second_number);

    float max_value;
    if (first_number > second_number) {
        max_value = first_number;
    } else {
        max_value = second_number;
    }

    printf("The maximum of %.2f and %.2f is: %.2f\n", first_number, second_number, max_value);
    
    return EXIT_SUCCESS;
}