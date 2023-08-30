#include <stdlib.h>
#include <stdio.h>
// just an example of a forward reference. complier doesn't recogize number since it wasn't
// declared prior to the function some_label.
int main()
{
    some_label:
        printf("Hello world! %d", number);
    
    int number;

    goto some_label;

    printf("This code here will not be executed!\n");
}