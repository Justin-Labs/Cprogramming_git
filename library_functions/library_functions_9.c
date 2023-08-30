#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// make sure that there are enough elements in the array you copy to or it will crash.
int main()
{
    char book_name[] = "Harry Potter and the Goblet of Fire";
    char book_name_copy[100];

    printf("Original book name: %s\n", book_name);
    printf("Original copy: %s", book_name_copy);

    printf("\n\n");

    strcpy(book_name_copy, book_name);

    printf("After copy book name: %s\n", book_name);
    printf("Updated copy: %s\n", book_name_copy);
    
    return EXIT_SUCCESS;
}