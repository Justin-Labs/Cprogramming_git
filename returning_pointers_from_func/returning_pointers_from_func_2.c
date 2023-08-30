#include <stdlib.h>
#include <stdio.h>
// example only, :warning address of stack memory associated with local variable 'arr'
// returned.
float* get_array() {
    float arr[] = {12.4, 4.5, 6.7, 3.44};

    return arr;
}

int main()
{
    float* float_ptr = get_array();
}