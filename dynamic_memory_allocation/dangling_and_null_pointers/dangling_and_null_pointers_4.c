#include <stdlib.h>
#include <stdio.h>
// this is an example of a memory leak, week allocated memory is not freed up.
void print_lap_times(float * float_ptr, int length) {
    printf("ADDRESS \t VALUE \n");
    for (int i = 0 ; i < length; i++) {
        printf("%p \t %.2f \n", &float_ptr[i], float_ptr[i]);
    }
}

int main() 
{
    float * lap_times_ptr = (float *)malloc(3 * sizeof(float));


    if (lap_times_ptr == NULL) {
        printf("Memory not allocated! \n");
        return EXIT_FAILURE;
    }

    lap_times_ptr[0] = 12.2;
    lap_times_ptr[1] = 10.3;
    lap_times_ptr[2] = 13.3;

    print_lap_times(lap_times_ptr, 3);

    return EXIT_SUCCESS;
}