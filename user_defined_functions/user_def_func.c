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
    printf("NOT invoking the hello_fn() yet!");

    return EXIT_SUCCESS;
}