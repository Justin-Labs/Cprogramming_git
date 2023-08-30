#include <stdlib.h>
#include <stdio.h>

int main()
{                       //if we use this format we have to have the \0.
    char company_name[] = {'S','k','i','l','l','s','o','f','t','\0'};

    printf("%s \n", company_name);

    printf("Size of the above string is: %lu \n", sizeof(company_name));
// will be 10, due to \0 which is the string delimiting character.
    printf("\n");

    return EXIT_SUCCESS;
}