#include <stdlib.h>
#include <stdio.h>

void print_os_details();

int main()
{
    print_os_details();

    printf("\n");
    return EXIT_SUCCESS;
}

void print_os_details() {
    char name[] = "MacOS"; 
    float version = 10.14;
    printf("Operating system name: %s \n", name);
    printf("Operating system version: %.2f \n", version);
}