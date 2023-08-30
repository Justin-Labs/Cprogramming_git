#include <stdlib.h>
#include <stdio.h>
// atol is short for ascii to long... both my compiliers didn't reproduce the numbers...
// so far the number on line 13 reports as a LONG LONG, which probably has to do with it..
// seems to jump from int to LONG LONG when adjusting size of literal.
// not finding matching use of atol with course example  with same output.
int main()
{
    char first_string[] = "1234578902384";

    long first_long = atol(first_string);

    printf("We now have a long: %ld\n", first_long);

    if (first_long == 12345678902384) {
        printf("We can perform long comparisons!\n");
    }

    return EXIT_SUCCESS;
}