#include <stdlib.h>
#include <stdio.h>
// getting first three elements in our array.
int main()
{
    float lap_timings[] = {12.3, 15.4, 11.2, 9.8, 13.5, 12.1};
    
    size_t lap_length = sizeof(lap_timings) / sizeof(lap_timings[0]);

    for (int i = 0; i < 3; i++) {
        printf("Element %d of the array lap_timings is: %.2f\n", i, lap_timings[i]);
    }

    return EXIT_SUCCESS;
}