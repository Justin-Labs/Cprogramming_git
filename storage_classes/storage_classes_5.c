#include <stdlib.h>
#include <stdio.h>
// example. prints 1 repeatedly since it is reset to 0 each time.
void increment_and_print_counter() {
    int counter = 0;

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