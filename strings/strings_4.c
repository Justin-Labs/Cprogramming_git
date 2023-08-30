#include <stdlib.h>
#include <stdio.h>
// using a char * ,to create a char pointer to a string. on the stack
int main()
{
    char* company_name = "Skillsoft";//lies in data segment of our program.

    int i = 0;
    
    while(company_name[i] != '\0') {
        printf("%c", company_name[i]);
        i++;
    }

    printf("\n\n");

    return EXIT_SUCCESS;
}