#include <stdlib.h>
#include <stdio.h>
// parameterized functions. Take in input variables to our functions and return.
double compute_add(double num_1, double num_2)
{
    return num_1 + num_2;
}

double compute_subtract(double num_1, double num_2)
{
    return num_1 - num_2;
}

int main()
{
    double first_num, second_num;

    printf("Enter the first number: ");
    scanf("%lf", &first_num);

    printf("Enter the second number: ");
    scanf("%lf", &second_num);

    double result_add = compute_add(first_num, second_num);
    printf("%lf + %lf = %lf\n", first_num, second_num, result_add);

    double result_subtract = compute_subtract(first_num, second_num);
    printf("%lf - %lf = %lf\n", first_num, second_num, result_subtract);

    return EXIT_SUCCESS;
}