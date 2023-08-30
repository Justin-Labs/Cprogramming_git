#include <stdlib.h>
#include <stdio.h>

int main()
{
    float first_num;
    float second_num;
    
    printf("Please enter the first number: ");
    scanf("%f", &first_num);
    
    printf("Please enter the second number: ");
    scanf("%f", &second_num);

    float response;
    printf("Please enter an estimate of the product of two numbers: ");
    scanf("%f", &response);

    float result = first_num * second_num;

    if (response == result) {   //not ideal way of comparing floats due to precision errors.
        printf("%f * %f = %f Your answer is %f which is correct!\n\n",
        first_num, second_num, result, response);
    } else {
        printf("%f * %f = %f Your answer is %f which is unfortunately, wrong.\n\n",
        first_num, second_num, result, response);
    }

    return EXIT_SUCCESS;
}