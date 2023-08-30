#include <stdlib.h>
#include <stdio.h>

void increment_value(float);

int main()
{
    float first_var = 3;

    printf("Value BEFORE function call: %.2f\n\n", first_var);

    increment_value(first_var);

    printf("Value AFTER function call: %.2f\n\n", first_var);

    return EXIT_SUCCESS;
}

void increment_value(float first_var) {

    first_var = first_var + 10;

    printf("Value IN function after increment: %.2f\n\n", first_var);
}