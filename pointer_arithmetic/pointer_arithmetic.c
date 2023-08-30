#include <stdlib.h>
#include <stdio.h>

int main()
{
    int number_array[] = {100, 200, 300, 400, 500};
    // note: this only works on arrays on the stack, not ones on the heap.
    int size_of_array = sizeof(number_array) / sizeof(int);
                // \t is tab character
    printf("ADDRESS \t VALUE \n");
    for (int i = 0; i < size_of_array; i++) {
        printf("%p \t %d \n", &number_array[i], number_array[i]);
    }

    return EXIT_SUCCESS;
}