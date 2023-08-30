#include <stdlib.h>
#include <stdio.h>
// example of pass by value, where a copy of the value passed in created and the original
// value still remains the same when we leave the function.
// not affected by matching variable name. Same for floats.
void increment_value(float);

int main()
{
    float first_var = 3;

    printf("Value BEFORE function call: %f\n\n", first_var);

    increment_value(first_var);

    printf("Value AFTER function call: %f\n\n", first_var);

    return EXIT_SUCCESS;
}

void increment_value(float first_var) {

    first_var = first_var + 10;

    printf("Value in function after increment: %f\n\n", first_var);
}