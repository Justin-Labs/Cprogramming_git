#include <stdlib.h>
#include <stdio.h>

int main()
{
    float lap_timings[] = {12.3, 15.4, 11.2, 9.8, 13.5, 12.1};
    //size_t is a type which is used to represent the size of objects in bytes. You can
    //think of this as an alias for the unsigned int type. When you see a variable of type
    //size_t, you whould expect to see invocations to the sizeof function in the near vicinity.
    size_t lap_length = sizeof(lap_timings) / sizeof(lap_timings[0]);

    for (int i = 0; i < lap_length; i++) {
        printf("Element %d of the array lap_timings is: %.2f\n", i, lap_timings[i]);
    }

    return EXIT_SUCCESS;
}