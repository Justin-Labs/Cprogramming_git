#include <stdlib.h>
#include <stdio.h>

int main()
{       //when there are multiple conditions specified in the for loop, it's going to be the last one thats
        //going  to be evaluated and used to determine when the loop termination ends. So some_variable<5
        //is going to determine when out loop stops executing. The condition index<3 is simply ignored.
    for (int index = 0, some_variable = 0; 
            index < 3, some_variable < 5;
            index++, some_variable++) {
            printf("index = %d. some_variable = %d\n", index, some_variable);
    }

    return EXIT_SUCCESS;
}