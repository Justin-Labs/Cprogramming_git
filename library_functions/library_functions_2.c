#include <stdlib.h>
#include <stdio.h>
// This works as expected.
int main()
{
    char first_string[] = "1234.5678";

    float first_float = atof(first_string);

    printf("We now have a float: %f\n", first_float);

    printf("Add 100 to the value: %f\n", first_float + 100);

    return EXIT_SUCCESS;
}