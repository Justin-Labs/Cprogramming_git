#include <stdlib.h>
#include <stdio.h>
// using a char * ,to create a char pointer to a string. on the stack
int main()
{
    char* company_name = "Skillsoft";//lies in data segment of our program.

    printf("%s \n", company_name);

    printf("Size of the above string is: %lu \n", sizeof(company_name));
// will be 4 on my setup, because that's how big the pointer is, not the string...
// remember that. 
    printf("\n");

    return EXIT_SUCCESS;
}