#include <stdlib.h>
#include <stdio.h>
// labels that the goto statement refers to have function scope. That in turn means that
// the goto must be to another location within the same function.
// another note, if char is entered it infinitly prints both printf statements...
int main()
{
    some_label:
        printf("Hello world! \n");
    
    int number;

    printf("Enter any number to print 'Hello World' (-1 to exit): ");
    scanf("%d", &number);
    
    if (number != -1) {
        goto some_label;
    }
}