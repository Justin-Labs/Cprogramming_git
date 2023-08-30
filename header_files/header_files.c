#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// M_PI from <math.h>
float compute_circle_area(float radius) {
    return M_PI * radius * radius;
}

int main()
{
    float radius = 7.8;
    float area = compute_circle_area(radius);

    printf("Area of the circle with radius %.2f is %.2f \n", radius, area);

    return EXIT_SUCCESS;
}