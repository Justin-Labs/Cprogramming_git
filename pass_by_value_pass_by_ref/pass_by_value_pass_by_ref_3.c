#include <stdlib.h>
#include <stdio.h>
// example of pass by value, where a copy of the value passed in created and the original
// value still remains the same when we leave the function.
// not affected by matching variable name. Same for int, float, and char.
void increment_value(char);

int main()
{
    char first_var = 'A';

    printf("Value BEFORE function call: %c\n\n", first_var);

    increment_value(first_var);

    printf("Value AFTER function call: %c\n\n", first_var);

    return EXIT_SUCCESS;
}

void increment_value(char first_var) {

    first_var = first_var + 10;

    printf("Value in function after increment: %c\n\n", first_var);
}