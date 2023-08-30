#include <stdlib.h>
#include <stdio.h>

int main()
{
    int year = 1921;
    int * year_ptr = &year;

    printf("year value: %d\n", year);
    printf("year address: %p\n", year_ptr);

    printf("\n");

    printf("What does this print: %d\n", *&year); //applied both the ampersand operator
                                                  //and derefencing operator. 
                                                  //basically cancels each other out.

    return EXIT_SUCCESS;
}