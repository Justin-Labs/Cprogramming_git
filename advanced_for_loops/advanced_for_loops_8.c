#include <stdlib.h>
#include <stdio.h>

int main()
{
    char letters[] = "ABCD";
    int numbers[] = {100, 200, 300};

    for (int letter_index = 0; letter_index < 4; letter_index++) {

        for (int number_index = 0; number_index < 3; number_index++) {
             
             printf("%c - %d\n", letters[letter_index], numbers[number_index]);
        }
    }

    return EXIT_SUCCESS;
}