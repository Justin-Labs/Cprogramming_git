#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() 
{
    char* company_name = "Skillsoft";
// strlen is the right way to access the length of a string, does not include terminating
// character \0.
    int string_lenth = strlen(company_name);

    printf("String length is: %d\n", string_lenth);
// indexing operation
    printf("ADDRESS \t VALUE\n");
    for (int i = 0; i < string_lenth; i++) {
        printf("%p \t %c \n", &company_name[i], company_name[i]);
    }

    return EXIT_SUCCESS;
}