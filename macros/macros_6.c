#include <stdlib.h>
#include <stdio.h>
// use of some standard predefined macros
int main()
{
    printf("Filename: %s\n", __FILE__);
    printf("Date in MMM DD YYYY format: %s\n", __DATE__);   //date and time here are compile time
    printf("Time in HH:MM:SS format: %s\n", __TIME__);
    printf("Line number: %d\n", __LINE__);

    return EXIT_SUCCESS;
}