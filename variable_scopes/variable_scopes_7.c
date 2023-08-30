#include <stdlib.h>
#include <stdio.h>

void print_os_details(char name[], float version);

int main()
{
    print_os_details("MacOS", 10.14); 

    printf("\n");
    return EXIT_SUCCESS;
}

void print_os_details(char name[], float version) {

    printf("Operating system name: %s \n", name);
    printf("Operating system version: %.2f \n", version);
}