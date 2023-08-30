#include <stdlib.h>
#include <stdio.h>
// use of 3 macros.
#define PI 3.14159
#define MAX_LIMIT 5
#define PRINT_STRING "radius = %d, area = %.2f\n"

int main()
{
    for (int r = 1; r < MAX_LIMIT; r++) {
        printf(PRINT_STRING, r, PI * r * r);
    }
    return EXIT_SUCCESS;
}