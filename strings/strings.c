#include <stdlib.h>
#include <stdio.h>

int main()
{
    char company_name[] = "Skillsoft";

    printf("%s \n", company_name);

    printf("Size of the above string is: %lu \n", sizeof(company_name));
// will be 10, due to \0 which is the string delimiting character.
    printf("\n");

    return EXIT_SUCCESS;
}