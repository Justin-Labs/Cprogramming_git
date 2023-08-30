#include <stdlib.h>
#include <stdio.h>

void increment_and_print_counter() {
    static int counter = 0; // this local static class changes the output entirely. it now 
// holds its last value and doesn't reset to 0. only initialized using constant literals.
    counter++;

    printf("Counter value is: %d\n", counter);
}

int main()
{                       // don't forget () after function invocation. you won't get anything..
    increment_and_print_counter();
    increment_and_print_counter();
    increment_and_print_counter();

    return EXIT_SUCCESS;
}