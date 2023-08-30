#include <stdlib.h>
#include <stdio.h>
// example of pass by value, where a copy of the value passed in created and the original
// value still remains the same when we leave the function.
// not affected by matching variable name.
void increment_value(int);

int main()
{
    int first_var = 3;

    printf("Value BEFORE function call: %d\n\n", first_var);

    increment_value(first_var);

    printf("Value AFTER function call: %d\n\n", first_var);

    return EXIT_SUCCESS;
}

void increment_value(int first_var) {

    first_var = first_var + 10;

    printf("Value in function after increment: %d\n\n", first_var);
}