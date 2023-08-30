#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool some_value = true;

    if (some_value) {
        printf("some_value is true: %d\n", some_value);
    } else {
        printf("some_value is false: %d\n", some_value);
    }

    return EXIT_SUCCESS;
}