#include <stdlib.h>
#include <stdio.h>

int main()
{
    char company_name[20] = "Skillsoft";

    printf("%s \n", company_name);

    printf("Size of the above string is: %lu \n", sizeof(company_name));
// will be 20, due to that's how we explicitly defined it. that include the 9 characters
// of the string plus one for the delimiter \0 and the remaining 10 spaces that we alloted. 
    printf("\n");

    return EXIT_SUCCESS;
}