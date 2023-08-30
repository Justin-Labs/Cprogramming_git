#include <stdlib.h>
#include <stdio.h>


void hello_fn()
{
    printf("Hello - how are you?\n");
}

void goodbye_fn()
{
    printf("Goodbye - see you soon!\n");
}

void birthday_wish_fn()
{
    printf("A very happy birthday to you!\n");
}

int main()
{
    printf("Before invoking the functions\n");

    hello_fn();
    goodbye_fn();

    printf("After invoking the functions\n");

    return EXIT_SUCCESS;
}