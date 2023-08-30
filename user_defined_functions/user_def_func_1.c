#include <stdlib.h>
#include <stdio.h>

/*
* Function declaration and definition.  void return means it returns nothing.
*/
void hello_fn()
{
    printf("Hello - how are you?\n");
}

int main()
{
    printf("Before invoking the hello_fn()\n");

    hello_fn();

    printf("After invoking the hello_fn()\n");

    return EXIT_SUCCESS;
}