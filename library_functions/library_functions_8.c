#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char full_name[] = "Deborah Summerhouse";

    for (int i = 0; i < strlen(full_name); i++) {
        printf("%c ", full_name[i]);
    }

    printf("\n\n");

    return EXIT_SUCCESS;
}