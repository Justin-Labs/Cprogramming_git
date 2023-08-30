#include <stdlib.h>
#include <stdio.h>

void greet_by_name(char name[50]) 
{
    printf("Good morning, %s", name);
}

int main()
{
    char name[50];

    fputs("What is your name? ", stdout);
    fgets(name, 50, stdin);

    greet_by_name(name);    //invoked function greet_by_name

    return EXIT_SUCCESS;
}