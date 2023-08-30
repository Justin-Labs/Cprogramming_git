#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// strcmp is the string comparision function, has a return type int. if first input
// argument comes alphabetically after the second, then the return value will be
// greater than zero. If it comes before then the return value will be less than zero.
// Specifically it returns the difference between the two ascii values its comparing.
// And it is case sensitive.
// Related function strcasecmp which is not case sensitive.
int main()
{
    char* string_1 = "Alice";
    char* string_2 = "Alice";

    int result = strcmp(string_1, string_2);

    printf("Compare result: %d \n",  result);

    return EXIT_SUCCESS;
}