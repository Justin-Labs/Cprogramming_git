#include <stdlib.h>
#include <stdio.h>
// the hazard of interating over an array in C is here, we can access elements outside
// of it, and there are no compilier warnings for this.
int main()
{
    float lap_timings[] = {12.3, 15.4, 11.2, 9.8, 13.5, 12.1};
    
    size_t lap_length = sizeof(lap_timings) / sizeof(lap_timings[0]);

    for (int i = 0; i < 8; i++) {
        printf("Element %d of the array lap_timings is: %.2f\n", i, lap_timings[i]);
    }

    return EXIT_SUCCESS;
}