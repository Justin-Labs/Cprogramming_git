#include <stdlib.h>
#include <stdio.h>

int main()
{       //when we want multiple conditions to be evaluated in a for loop we have to link
        //them together with a logical operator such as && or ||. with && it runs
        // 3 times, with || it will run 5 times.
    for (int index = 0, some_variable = 0; 
            (index < 3) && (some_variable < 5);
            index++, some_variable++) {
            printf("index = %d. some_variable = %d\n", index, some_variable);
    }

    return EXIT_SUCCESS;
}