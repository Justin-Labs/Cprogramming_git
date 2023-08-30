#include <stdlib.h>
#include <stdio.h>
// experiment to make last example work.
float* get_array() {
    static float arr[] = {12.4, 4.5, 6.7, 3.44};

    return arr;
}

int main()
{
    float* float_ptr = get_array();
    for (int i =0; i < 4; i ++) {
        printf("Value from static float: %.2f at index: %d\n", float_ptr[i], i);
    }
}