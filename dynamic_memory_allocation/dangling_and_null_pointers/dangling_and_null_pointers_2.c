#include <stdlib.h>
#include <stdio.h>

int main()
{
    char * ptr;

    {
        char name[10] = "Alice";
        ptr = name;
    }

    printf("(Security risk, accessing deallocated memory!) name: %s\n", ptr);

    return EXIT_SUCCESS;
}