#include <stdlib.h>
#include <stdio.h>
// turning attention to scope of function parameters.
// here is our function prototype or an explicit declaration of print_os_details.
void print_os_details(char os_name[], float os_version);

int main()
{
    char name[] = "Mac OS";
    float ver = 10.14;

    print_os_details(name, ver);  // invoke the print_os_details function.

    printf("\n");
    return EXIT_SUCCESS;
}
// definition of function print_os_details
void print_os_details(char name[], float version) {

    printf("Operating system name: %s \n", name);
    printf("Operating system version: %.2f \n", version);
}