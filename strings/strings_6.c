#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() 
{
    char* company_name = "Skillsoft";

    printf("ADDRESS \t VALUE\n");
    int i = 0;
// using pointer arithmetic
    while(*(company_name + i) != '\0') {
        printf("%p \t %c \n", company_name + i, *(company_name + i));
        i++;
    }
    
    return EXIT_SUCCESS;
}