#include <stdlib.h>
#include <stdio.h>

float pi = 3.14159;

static float compute_circle_area(float radius) {
    return pi * radius *radius;
}

static float compute_circle_circumference(float radius) {
    return 2 * pi * radius;
}

int main()
{
    float radius = 10.2;

    printf("Area of the circle = %f\n", compute_circle_area(radius));
    printf("Circumference of the circle = %f\n", compute_circle_circumference(radius));

    return EXIT_SUCCESS;
}