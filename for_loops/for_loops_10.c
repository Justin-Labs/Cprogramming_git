#include <stdlib.h>
#include <stdio.h>

int main()
{       //initailization; empty condition eval; update expression
    for (int index = 0 ; ; index--) {
        printf(" %d. Hello World \n", index);
        //internal conditional eval with break statement.This only runs once
        //since 0 is less than 5.
        if (index < 5) {
            break;
        }
    }

    return EXIT_SUCCESS;
}