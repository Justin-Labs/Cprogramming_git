// if you add on the keyword static to these functions they won't be accessible as
// an external reference. static applied to a function tells C compiler that we would
// only like that function to be available in that file.
float pi = 3.14159;

float compute_circle_area(float radius) {
    return pi * radius *radius;
}

float compute_circle_circumference(float radius) {
    return 2 * pi * radius;
}