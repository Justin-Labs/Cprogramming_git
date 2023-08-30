#include <stdlib.h>
#include <stdio.h>

int main()
{
    char name[10];
    char city[12];
    
    puts("What is your name?");
    gets(name); // considered quite dangerous, because it leaves the door open to a  
                // security vulnerability, as it doesn't perform bounds checking while
                // accepting user input. fgets is the option that's safe.
    puts("Where do you live?");
    gets(city);

    puts("Welcome");
    printf("Hello %s from %s!\n\n", name, city);

    return EXIT_SUCCESS;
}
