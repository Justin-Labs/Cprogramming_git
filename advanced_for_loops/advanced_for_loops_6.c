#include <stdlib.h>
#include <stdio.h>

int main()
{
    char name[] = "Adam Smith";

    size_t name_length = sizeof(name) / sizeof(name[0]);

    printf("Length of char array: %zu\n\n", name_length);

    for (int i= 0; i < name_length; i++) {
        printf("%c|", name[i]);
    }
    printf("\n\n");

    return EXIT_SUCCESS;
}