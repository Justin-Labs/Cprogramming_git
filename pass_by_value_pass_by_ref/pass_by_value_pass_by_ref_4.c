#include <stdlib.h>
#include <stdio.h>
// When we pass in an array as an input argument into a function, updates which are made
// to elements of that array inside that functionwill continue to be reflected even when
// control returns to the calling function. Passed by reference. Arrays are reference types.
void print_array(int lap_times[], int len);

void update_array(int lap_times[]);

int main()
{
    int lap_times[] = {10, 11, 13, 9, 12, 14};

    printf("Value BEFORE update function call\n");
    print_array(lap_times, 6);

    update_array(lap_times);

    printf("\nValue AFTER update function call\n");
    print_array(lap_times, 6);

    return EXIT_SUCCESS;
}

void print_array(int lap_times[], int len) {

    printf("[ ");

    for (int i = 0; i < len; i++) {
        printf("%d ", lap_times[i]);
    }
}

void update_array(int laptimes[]) {
    laptimes[0] = 1000;
}