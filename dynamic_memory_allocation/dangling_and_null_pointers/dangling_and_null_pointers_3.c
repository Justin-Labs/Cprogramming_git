#include <stdlib.h>
#include <stdio.h>

int main()
{
    char * ptr;

    {
        char name[10] = "Alice";
        ptr = name;
    }

    ptr = NULL;
    
    printf("name: %s\n", ptr);

    return EXIT_SUCCESS;
}